class Solution:
    def checkValid(self, matrix: List[List[int]]) -> bool:
        n = len(matrix)
        for row in range(n):
            seen = [None] * (n + 1)
            seen_c = [None] * (n + 1)
            for column in range(n):
                v = matrix[row][column]
                vc = matrix[column][row]
                if seen[v] is True or seen_c[vc] is True:
                    return False
                seen[v] = True
                seen_c[vc] = True
        
        return True
                