import unittest

class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x >= 0:
            res = str(x)
            result = int(res[::-1])
            if result == x:
                return True
        else:
            return False

class TestFunction(unittest.TestCase):
    def test_incorrectInput_single(self):
        obj = Solution()
        self.assertFalse(obj.isPalindrome(12))
    def test_correctInput_single(self):
        obj = Solution()
        self.assertTrue(obj.isPalindrome(11))

if __name__ == "__main__":
    unittest.main()
