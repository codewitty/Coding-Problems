import unittest

class Solution:
    def defangIPaddr(self, address: str) -> str:
        res = address.replace(".", "[.]")
        return res

class TestFunction(unittest.TestCase):
    def test_correctInput_single(self):
        obj = Solution()
        self.assertEqual(obj.defangIPaddr("1.2.3.4"), "1[.]2[.]3[.]4")

if __name__ == "__main__":
    unittest.main()
