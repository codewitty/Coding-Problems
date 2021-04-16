class Solution:
    def myAtoi(self, s: str) -> int:
        s = s.strip()
        if s == "":
            return 0
        r = ""
        res = []
        flag = False
        if s[0] == "-":
            r = s.replace("-", "", 1)
            flag = True
        elif s[0] == "+":
            r = s.replace("+", "", 1)
        else:
            r = s
        
        if r == "":
            return 0
        
        if not 48 <= ord(r[0]) <= 57:
            return 0
        
        i = 0
        
        while i < len(r) and 48 <= ord(r[i]) <= 57:
                res.append(r[i])
                i+=1

        a_string = "".join(res)
        an_integer = int(a_string)
        
        if flag:
            an_integer *= -1
        
        if an_integer > 2147483647:
            an_integer = 2147483647   
        elif an_integer < -2147483648:
            an_integer = -2147483648
            
        return an_integer


obj = Solution()
print(f'{obj.myAtoi("++1")}')
