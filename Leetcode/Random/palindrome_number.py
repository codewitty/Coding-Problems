class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        res = str(x)
        result = int(res[::-1])
        if result == x:
            return True
    
def main():
    obj = Solution()
    print(f'{obj.isPalindrome(-123)}')

if __name__ == "__main__":
    main()
