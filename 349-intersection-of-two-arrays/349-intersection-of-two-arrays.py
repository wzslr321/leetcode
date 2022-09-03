class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        table = [None] * 1007
        used = {}
        ans = []
        if len(nums1) > len(nums2):
            for num in nums1:
                table[num] = True
            for num in nums2:
                if table[num] == True and num not in used:
                    ans.append(num)
                    used[num] = True
                    
        else:
            for num in nums2:
                table[num] = True
            for num in nums1:
                if table[num] == True and num not in used:
                    ans.append(num)
                    used[num] = True
        
        return ans