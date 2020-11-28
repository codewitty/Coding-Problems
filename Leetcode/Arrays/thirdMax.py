class Solution(object):
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res = [] 
        for i in nums: 
            if i not in res: 
             res.append(i)
        res = sorted(res, reverse=True)
        if len(res) > 2:
            return res[2]
        else:
            return res[0]
