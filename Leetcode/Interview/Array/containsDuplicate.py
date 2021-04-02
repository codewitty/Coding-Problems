ass Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool

        res = []
        flag = False
        for num in nums:
            if num in res:
                flag = True
                continue
            else:
                res.append(num)

        return flag
           """
 
        if len(nums) == 0:
            return False
        mp = {}
        for num in nums:
            if not mp.get(num):
                mp[num] = True
            else:
                return True
        return False
