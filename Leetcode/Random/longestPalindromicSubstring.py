class Solution:
    def longestPalindrome(self, s: str) -> str:
        s = s.lower()
        output = s[0]

        for num in range(len(s)):
            if output == s:
                return s
            i = num
            j = len(s) - 1
            while s[i] != s[j]:
                j-=1
            while i != j:
                if s[i] == s[j]:
                    output = s[i:j+1]
                    i += 1
                    j -= 1
                    if len(output) == 2:
                        break
                else:
                    output = ""
                    break

        return output

obj = Solution()

print(f'{obj.longestPalindrome("aaaaa")}')

