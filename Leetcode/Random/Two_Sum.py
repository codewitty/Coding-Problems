class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        reference = {}
        output = []
        for x, num in enumerate(nums):
            find = target - num
            if find in reference.keys():
                output.extend([x, reference[find]])
                return output
            else:
                reference[num] = x
