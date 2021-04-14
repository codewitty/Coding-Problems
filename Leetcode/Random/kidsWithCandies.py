import unittest
from typing import List

class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max_val = max(candies)
        res = []
        for candy in candies:
            if candy + extraCandies >= max_val:
                res.append(True)
            else:
                res.append(False)
        return res

class TestFunction(unittest.TestCase):
    def test_incorrectInput_single(self):
        obj = Solution()
        self.assertEqual(obj.kidsWithCandies([2,3,5,1,3],3), [True,True,True,False,True])
    def test_correctInput_single(self):
        obj = Solution()
        self.assertEqual(obj.kidsWithCandies([12,1,12], 10), [True,False,True])

if __name__ == "__main__":
    unittest.main()
