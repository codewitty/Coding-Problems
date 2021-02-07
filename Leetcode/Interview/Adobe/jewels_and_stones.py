class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        result = 0
        for stone in stones:
            if stone in jewels:
                result += 1
        return result

# Helper function for assert success

def myfunc(msg='assert OK'):
    print (msg)
    return True

# Test using assert
obj = Solution()

assert obj.numJewelsInStones("aA", "aAAbbbb") == 3  and myfunc("Test 1 Success")
assert obj.numJewelsInStones("aAb", "aAAbbbb") == 7 and myfunc("Test 2 Success")
assert obj.numJewelsInStones("aAbC", "acCAAbbbb") == 8 and myfunc("Test 3 Success")
