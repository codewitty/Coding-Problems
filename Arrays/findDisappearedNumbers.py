class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        nums = sorted(nums)
        out = []

        for i in range(0, len(nums) - 1):
           if nums[i + 1] > nums[i] + 1:
               difference = nums[i+1] - nums[i]
               index = 0
               while (index < difference)
                   out.append(nums[i]+1)
                   index++

        return out

x = Solution()
nums = [4,3,2,7,8,2,3,1]
print(x.findDisappearedNumbers(nums))
