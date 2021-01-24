from typing import List

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        output = []
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                    output.append(i)
                    output.append(j)
                    return output 
        return None


# Test using assert

obj = Solution()

assert obj.twoSum([1, 2, 3], 4) == [0, 2]
assert obj.twoSum([1234, 5678, 9012], 14690) == [1, 2]
assert obj.twoSum([2, 2, 3], 4) in [[0, 1], [1, 0]]
assert obj.twoSum([2, 2], 4) in [[0, 1], [1, 0]]
assert obj.twoSum([8, 7, 2, 5, 3, 1], 10) in [[0, 2], [2, 0], [1, 4], [4, 1]]


"""

arr = [0,0,1,3,12,0]

print(obj1.obj.twoSum(arr, 15))
"""
