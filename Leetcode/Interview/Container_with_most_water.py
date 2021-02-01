from typing import List

class Solution:
    def maxArea(self, height: List[int]) -> int:
        j = len(height) - 1
        i = 0
        if len(height) == 2:
            return min(height[i],height[j]) * 1
        max_volume = 0
        
        while i < j:
            right = height[j]
            left = height[i]
            width = j - i
            volume = min(right, left) * width
            max_volume = max(volume, max_volume)
            if height[i] <= height[j]:
                for taller in range(i+1, j):
                    if height[taller] > height[i]:
                        i = taller
                        break
                else:
                    break
            elif height[j] <= height[i]:
                for taller in range(j, i, -1):
                    if height[taller] > height[j]:
                        j = taller
                        break
                else:
                    break
            else:
                break
        return max_volume

"""
class Solution:
    def maxArea(self, height: List[int]) -> int:
        j = len(height) - 1
        i = 0
        max_volume = 0
        
        while i < j:
            right = height[j]
            left = height[i]
            width = j - i
            volume = min(right, left) * width
            max_volume = max(volume, max_volume)
            if height[i] <= height[j]:
                i += 1
            else:
                j -= 1
        return max_volume
"""

        
obj = Solution()
arr = [1,3,2,5,25,24,5]
print(obj.maxArea(arr))
