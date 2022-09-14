
class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        for r in image:
            i = 0
            j = len(image) - 1
            while i < j:
                r[i], r[j] = r[j], r[i]
                i += 1
                j -= 1
            for i in range(len(r)):
                if r[i] == 0:
                    r[i] = 1
                else:
                    r[i] = 0
        return image
            
           