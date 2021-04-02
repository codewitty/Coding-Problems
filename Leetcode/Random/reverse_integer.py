class Solution:
    def reverse(self, x: int) -> int:
        if -10 < x < 10:
            return x
        res = str(abs(x))
        result = int(res[::-1])
        if x < 0:
            result *= -1
        if result > 2147483647 or result < -2147483647:
            return 0
        return result

def main():
    obj = Solution()
    print(f'{obj.reverse(-123)}')

if __name__ == "__main__":
    main()











# class Solution:
#     def reverse(self, x: int) -> int:
#         flag = False
#         if x < 1:
#             x *= -1
#             flag = True
#         res = [int(y) for y in str(x)]
#         res = res[::-1]
#         strings = [str(integer) for integer in res]
#         a_string = "".join(strings)
#         result_integer = int(a_string)
#         if flag:
#             result_integer *= -1
#         if result_integer > 2147483647 or result_integer < -2147483647:
#             return 0
#         return result_integer



