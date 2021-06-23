class Solution:
    def longestPalindrome(self, s: str) -> str:

        if len(s) == 1 or len(s) == 2:
            return s

        s = s.lower()

        for num in range(len(s)):
            i = num
            j = len(s) - 1
            while s[i] != s[j]:
                j-=1
            while i != j:
                if s[i] == s[j]:
                    output = s[i:j+1]
                    i += 1
                    j -= 1
                else:
                    output = ""
                    break

        return output



obj = Solution()

print(f'{obj.longestPalindrome("aca")}')

