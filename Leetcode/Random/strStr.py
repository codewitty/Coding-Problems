import unittest

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        if not needle:
            return 0
        return haystack.find(needle)

class TestFunction(unittest.TestCase):
    def test_incorrectInput_single(self):
        obj = Solution()
        self.assertEqual(obj.strStr("", ""), 0)
        self.assertEqual(obj.strStr("aaaaa", "bba"), -1)
    def test_correctInput_single(self):
        obj = Solution()
        self.assertEqual(obj.strStr("hello", "ll"), 2)

if __name__ == "__main__":
    unittest.main()
