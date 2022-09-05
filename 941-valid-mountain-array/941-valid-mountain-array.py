class Solution:
    def validMountainArray(self, arr: List[int]) -> bool:
        if len(arr) < 3 or arr[1] < arr[0]: 
            return False
        i = 0
        while arr[i + 1]  > arr[i]:
            i += 1
            if i + 1 >= len(arr):
                return False
        
        while i + 1 < len(arr) and arr[i + 1] < arr[i]:
            i += 1
        
        return i == len(arr) - 1