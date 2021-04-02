class Solution:
    def reverse(self, x: int) -> int:
        flag = False
        if x < 1:
            x *= -1
            flag = True
        res = [int(y) for y in str(x)]
        res = res[::-1]
        strings = [str(integer) for integer in res]
        a_string = "".join(strings)
        result_integer = int(a_string)
        if flag:
            result_integer *= -1
        if result_integer > 2147483647 or result_integer < -2147483647:
            return 0
        return result_integer
