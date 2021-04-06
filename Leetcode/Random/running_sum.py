from typing import List
import unittest

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        out = []
        sums = 0
        for num in range(0, len(nums)):
            sums += nums[num]
            out.append(sums)
        return out

class TestFunction(unittest.TestCase):
    def test_correctInput_single(self):
        obj = Solution()
        self.assertEqual(obj.runningSum([1,2,3,4]), [1,3,6,10])
        self.assertEqual(obj.runningSum([1,1,1,1,1]), [1,2,3,4,5])

if __name__ == "__main__":
    unittest.main()
