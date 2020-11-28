def heightChecker(heights):
    """
    :type heights: List[int]
    :rtype: int
    """
    out_sort = sorted(heights)
    count = 0

    for i in range(len(heights)):
        if heights[i] != out_sort[i]:
            count += 1

    return count


l1 = [1, 1, 4, 2, 1, 3]

print(heightChecker(l1))
