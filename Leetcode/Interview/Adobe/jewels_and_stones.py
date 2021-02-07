class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        result = 0
        for stone in stones:
            if stone in jewels:
                result += 1
        return result


# Test using assert
obj = Solution()

assert obj.numJewelsInStones("aA", "aAAbbbb") == 3 
assert obj.numJewelsInStones("aAb", "aAAbbbb") == 7 
assert obj.numJewelsInStones("aAbC", "acCAAbbbb") == 8 
