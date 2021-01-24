class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        
        """
        output = []
        string = ''.join(str(x) for x in digits)
        ints = int(string)
        ints += 1
        string = str(ints)
        for letter in string:
            output.append(letter)
        if len(digits) > 1 and digits[-1] != 9:
            while len(output) != len(digits):
                output.insert(0, 0)
            
        return output

obj1 = Solution()

array = [0, 0, 9]

print(obj1.plusOne(array))
