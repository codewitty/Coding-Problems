from typing import List

class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        res = strs[0]
        for x in range(0, len(strs)):
            while strs[x].find(res) != 0:
                res = res[:len(res)-1]
        return res

def main():
    obj = Solution()
    print(f'{obj.longestCommonPrefix(["flower","flow","flight"])}')
    print(f'{obj.longestCommonPrefix(["ab","b"])}')

if __name__ == "__main__":
    main()
