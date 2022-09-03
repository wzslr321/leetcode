class Solution:
    def greatestLetter(self, s: str) -> str:
        dict = {}
        ans = '@'
        for c in s:
            dict[c] = True
            if c.islower() and c.upper() in dict:
                ans = max(ans, c.upper())
            if c.isupper() and c.lower() in dict:
                ans = max(ans, c)
        if ans == '@':
            return ""
        return ans