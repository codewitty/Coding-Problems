import unittest
import itertools
from itertools import combinations

class Solution:
    def letterCombinations(self, digits: str) -> str:
        dicts = {"2":["a", "b", "c"], "3":["d", "e", "f"], "4":["g", "h", "i"], "5":["j", "k", "l"], "6":["m", "n", "o"], "7":["p", "q", "r", "s"], "8":["t", "u", "v"], "9":["w", "x", "y", "z"]}
        result = []
        res = [""]
        for digit in digits:
            if digit in dicts.keys():
                lists = dicts[digit]
                result.append(lists)

        res = result[0]
        temps = []
        for i in range(1, len(result)):
            for l in result[i]:
                for m in range(0, len(res)):
                    print(res[m])
                    temp = str(res[m] + l)
                    temps.append(temp)
            print(f'Temps: {temps}')
            res = temps
            temps = []
        return res
        
obj = Solution()
print(f'Answer: {obj.letterCombinations("237")}')
#print(f'Answer: {obj.aggregate([["a", "b", "c"], ["d", "e", "f"]])}')

"""
class TestFunction(unittest.TestCase):
    def test_correctInput_single(self):
        obj = Solution()
        self.assertEqual(obj.defangIPaddr("1.2.3.4"), "1[.]2[.]3[.]4")

if __name__ == "__main__":
    unittest.main()
"""
