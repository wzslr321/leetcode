class Solution:
    def interpret(self, command: str) -> str:
        ans = ""
        for i in range(len(command)):
            if command[i] == 'G':
                ans = ans + "G"
            if command[i] == '(':
                if command[i + 1] == 'a':
                    ans = ans + "al"
                    i += 3
                else: 
                    ans = ans + "o"
                
        return ans
        
        