import unittest
from typing import List

class Solution:
    def buddyStrings(self, s: str, goal: str) -> bool:
        for i in s:
            
        pass

class TestFunction(unittest.TestCase):
    def test_correctInput_single(self):
        obj = Solution()
        self.assertEqual(obj.buddyStrings("aa","aa"), True)
    def test_incorrectInput_single(self):
        obj = Solution()
        self.assertEqual(obj.buddyStrings("ab","ab"), False)

if __name__ == "__main__":
    unittest.main()
