class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x >= 0:
            res = str(x)
            result = int(res[::-1])
            if result == x:
                return True
        else:
            return False
    
def main():
    obj = Solution()
    print(f'{obj.isPalindrome(11)}')

if __name__ == "__main__":
    main()
