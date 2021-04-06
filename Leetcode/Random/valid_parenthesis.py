class Solution:
    def isValid(self, s: str) -> bool:
        out = []
        count = 0
        for x in s:
            if x == "(" or x == "[" or x == "{":
                out.append(x)
                count += 1
            elif (x == ")" and count >= 1 and out[count-1] == "("):
                  del out[count-1]
                  count -= 1
            elif (x == "]" and count >= 1 and out[count-1] == "["):
                  del out[count-1]
                  count -= 1
            elif (x == "}" and count >= 1 and out[count-1] == "{"):
                  del out[count-1]
                  count -= 1
            else:
                return False
            
        return not out

def main():
    obj = Solution()
    print(f'{obj.isValid("({{[]}})")}')
    print(f'{obj.isValid("({{[}]})")}')

if __name__ == "__main__":
    main()
