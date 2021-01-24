from typing import List

class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        count = len(nums)
        i = 0
        while count > 0:
            if nums[i] == 0:
                nums.append(0)
                nums.pop(i)
            else:
                i += 1
            count -= 1

obj1 = Solution()

arr = [0,0,1,3,12,0]

obj1.moveZeroes(arr)

print(arr)
