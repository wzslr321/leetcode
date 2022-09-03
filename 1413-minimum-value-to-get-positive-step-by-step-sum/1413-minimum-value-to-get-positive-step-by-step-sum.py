class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        ans = 1
        sum = 0
        min = float(inf)
        for el in nums:
            sum += el
            if(sum < min): 
                min = sum
         
        if min >= 0:
            return 1
        return min * -1  + 1
            