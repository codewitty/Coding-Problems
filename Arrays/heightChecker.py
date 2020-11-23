def heightChecker(heights):
    """
    :type heights: List[int]
    :rtype: int
    """
    out_sort = [i for i in heights]
    out_sort.sort()

    count = 0
    i = 0

    if heights == out_sort:
        count = 0
        return count

    while i < len(heights) - 1:
        smol = min(heights)
        if heights[i] == smol:
            i+=1
        else:
            smallest = i
            while i < len(heights) - 1:
                if heights[i] > heights[i+1]:
                    smallest = i+1
                    i+=1
            heights[smallest], heights[i] = heights[i], heights[smallest]
            count+=1
            i+=1

    return count


l1 = [1, 1, 4, 2, 1, 3]
l2 = [1, 2, 3, 4, 5, 6]

print(heightChecker(l1))

