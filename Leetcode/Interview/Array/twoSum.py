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

obj1 = Solution()

arr = [0,0,1,3,12,0]

print(obj1.twoSum(arr, 15))
