class TreeNode:
     def __init__(self, val=0, left=None, right=None):
         self.val = val
         self.left = left
         self.right = right

class Solution:
  def diameterOfBinaryTree(self, root) -> int:
    # Returns 
    # - the longest branch of node (its left or right)
    # - the diameter of node (which may or may not include node itself)
    def dfs(node):
      if not node:
        return [], []
      left_branch, left_diameter = dfs(node.left)
      right_branch, right_diameter = dfs(node.right)
      longest_br = [node.val]
      if len(left_branch) > len(right_branch):
        longest_br = left_branch + [node.val]
      else:
        longest_br = right_branch + [node.val]
      diameter = max(
        left_diameter, 
        right_diameter, 
        # reversed below since branches are built leaf->root, and when listing the path
        # left to right we need to reverse it.
        left_branch + [node.val] + list(reversed(right_branch)),
        key=len)
      return longest_br, diameter
      
    _, diameter = dfs(root)
    print('nodes in longest path: ', diameter)
    return len(diameter) - 1 # minus one since diameter is the number of edges in the path
        
obj = Solution()

val4 = TreeNode(4)
val5 = TreeNode(5)
val3 = TreeNode(3)
val2 = TreeNode(2,val4,val5)
val1 = TreeNode(1,val2,val3)




obj.diameterOfBinaryTree(val1)
