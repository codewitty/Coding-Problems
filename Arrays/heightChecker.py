def heightChecker(heights):
    """
    :type heights: List[int]
    :rtype: int
    """
    out_sort = [i for i in heights]
    out_sort.sort()

    flag = False

    count = 1
    i = 1

    if heights == out_sort:
        flag = True
        count = 0

    while flag == False:
        while i < len(heights):
            if heights[i] < heights[i-1]:
                heights[i-1], heights[i] = heights[i], heights[i-1]
                count+=1
            else:
                i+=1

        if heights == out_sort:
            flag = True

    return count


l1 = [1, 1, 4, 2, 1, 3]
l2 = [1, 2, 3, 4, 5, 6]

heightChecker(l1)

