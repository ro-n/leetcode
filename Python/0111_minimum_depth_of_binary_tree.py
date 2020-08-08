# 2020-08-07 23:37:29

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: TreeNode) -> int:

        if root is None:
            return 0

        depth = 1
        queue = []

        queue += [root]

        while len(queue) > 0:
            level = len(queue)
            for _ in range(0, level):
                [node] = queue[:1]
                queue = queue[1:]

                if node.left is None and node.right is None:
                    return depth

                if node.right is not None:
                    queue += [node.right]

                if node.left is not None:
                    queue += [node.left]

            depth += 1

        return depth
