def intersect(nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        res = []
        temp = []
        if len(nums1) < len(nums2):
            temp = nums1
            nums1 = nums2
            nums2 = temp

        for num in nums2:
            if num in nums1:
                res.append(num)
                nums1.pop(nums1.index(num))
        return res


def main():
    num1 = [1,2,2,1]
    num2 = [1,1]
    print(intersect(num2,num1))

if __name__ == '__main__':
    main()
