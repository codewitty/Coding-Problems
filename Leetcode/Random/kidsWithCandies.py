class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max_val = max(candies)
        print(max_val)
        res = []
        for candy in candies:
            if candy + extraCandies >= max_val:
                res.append(True)
            else:
                res.append(False)
        return res
