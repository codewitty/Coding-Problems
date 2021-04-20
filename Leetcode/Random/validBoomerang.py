from typing import List
import unittest


class Solution:
    def isBoomerang(self, points: List[List[int]]) -> bool:
        x1 = (points[1][0] - points[0][0])
        y1 = (points[1][1] - points[0][1])
        x2 = (points[2][0] - points[1][0])
        y2 = (points[2][1] - points[1][1])

        return (x1 * y2) != (y1 * x2)

class TestFunction(unittest.TestCase):
    def test_incorrectInput_single(self):
        obj = Solution()
        self.assertFalse(obj.isBoomerang([[1,1],[2,2],[3,3]]))
    def test_correctInput_single(self):
        obj = Solution()
        self.assertTrue(obj.isBoomerang([[1,1],[0,2],[0,1]]))

if __name__ == "__main__":
    unittest.main()
