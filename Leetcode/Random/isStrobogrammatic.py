class Solution:
    def isStrobogrammatic(self, num: str) -> bool:
        invalid = ["2", "3", "4", "5", "7"]
        nums = list(num)
        out = ""
        inp = num[::-1]
        
        for num in nums:
            if num in invalid:
                return False
            elif int(num) == 6:
                out += "9"
            elif int(num) == 9:
                out += "6"
            else:
                out += num
        if out == inp:
            return True
        return False:w
