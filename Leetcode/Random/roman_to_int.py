class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {"I": 1, "V": 5, "X":10, "L":50, "C":100, "D":500, "M":1000, "IV":4, "IX":9, "XL":40, "XC": 90, "CD":400, "CM":900}
        result = 0
        n = 0
        while n < len(s):
            if s[n:n+2] in roman.keys():
                result += roman[s[n:n+2]]
                res = s.replace(s[n:n+2], '')
                s = res
            elif s[n] in roman.keys():
                result += roman[s[n]]
                n += 1
                
        return result

def main():
    obj = Solution()
    print(f'{obj.romanToInt("MCMXCIV")}')
    print(f'{obj.romanToInt("III")}')

if __name__ == "__main__":
    main()
