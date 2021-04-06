from typing import List

# class Solution:
#     def longestCommonPrefix(self, strs: List[str]) -> str:
#         if len(strs) > 0:
#             common = [x for x in strs[0]]
#             strs.pop(0)
#             for word in strs:
#                 list_w = [x for x in word]
#                 ctr = 0
#                 while ctr < len(list_w) and ctr < len(common) and list_w[ctr] == common[ctr]:
#                     ctr += 1
#                 common = common[0:ctr]
#                 res = "".join(common)
#         else:
#             res = ""
#         return res

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        if len(strs) > 0:
            res = strs[0]
            for x in range(0, len(strs)):
                while strs[x].find(res) != 0:
                    res = res[:len(res)-1]
        return res

def main():
    obj = Solution()
    print(f'{obj.longestCommonPrefix(["flower","flow","flight"])}')
    print(f'{obj.longestCommonPrefix([])}')

if __name__ == "__main__":
    main()
