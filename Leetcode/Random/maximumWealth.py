import unittest
from typing import List

class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        res = [sum(sublist) for sublist in accounts]
        return (max(res))

obj = Solution()
print(obj.maximumWealth([[1,2,3],[3,2,1]]))
