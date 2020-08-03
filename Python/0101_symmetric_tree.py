# 2020-08-04 00:01:46

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: TreeNode) -> bool:
        if root is None:
            return True
        return self.dfs(root.left, root.right)

    def dfs(self, left, right):
        if left is not None and right is not None:
            return left.val == right.val and self.dfs(left.left,
                right.right) and self.dfs(right.left, left.right)
        return left is None and right is None
