import unittest
import itertools
from itertools import combinations

class Solution:
    def letterCombinations(self, digits: str) -> str:
        dicts = {"2":["a", "b", "c"], "3":["d", "e", "f"], "4":["g", "h", "i"], "5":["j", "k", "l"], "6":["m", "n", "o"], "7":["p", "q", "r", "s"], "8":["t", "u", "v"], "9":["w", "x", "y", "z"]}
        result = []
        res = []
        maxm = 0
        for digit in digits:
            if digit in dicts.keys():
                lists = dicts[digit]
                maxm = max(maxm, len(lists))
                for x in lists:
                    result.append(x)
        temp =  list(itertools.combinations(result, maxm))
        for r in temp:
            res.append(''.join(r))
        return res
        
obj = Solution()
print(f'Answer: {obj.letterCombinations("27")}')

"""
class TestFunction(unittest.TestCase):
    def test_correctInput_single(self):
        obj = Solution()
        self.assertEqual(obj.defangIPaddr("1.2.3.4"), "1[.]2[.]3[.]4")

if __name__ == "__main__":
    unittest.main()
"""
