class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        array = []
        string = ""
        max_s = 0
        for i in range(len(s)):
            j = i
            while j < len(s) and s[j] not in string:
                string += s[j]
                j += 1
            array.append(string)
            string = ""
        for i in array:
            if len(i) > max_s:
                max_s = len(i)
        return max_s

obj = Solution()
print(obj.lengthOfLongestSubstring("afsdkghshauogjqrijewrgipjqwruyfansdghdpfhwgijpiwfij"))

"""
#Better

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        tracker = {}
        max_s = 0
        start = 0

        for end in range(len(s)):
            if s[end] in tracker:
                start = max(start, tracker[s[end]] + 1)
            tracker[s[end]] = end
            max_s = max(max_s, end-start + 1)

        return max_s


#Best
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        longest = 0
        sub_string = ""
        for c in s:
            if c not in sub_string:
                sub_string += c
                longest = max(longest, len(sub_string))
            else:
                sub_string = sub_string[sub_string.index(c)+1:] + c

        return longest
"""
