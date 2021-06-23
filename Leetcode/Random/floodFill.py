from typing import List

class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, newColor: int) -> List[List[int]]:
        rows = len(image) - 1
        cols = len(image[0]) - 1
        stack = []
        st2 = []
        st2.append([sr, sc])
        stack.append(image[sr][sc])
        print(stack)
        print(st2)
        print(rows)
        print(cols)
        
            
        for el, em in zip(stack, st2):
            pass
            

obj = Solution()


obj.floodFill([[1,1,1],[1,1,0],[1,0,1]], 1, 1, 2)

