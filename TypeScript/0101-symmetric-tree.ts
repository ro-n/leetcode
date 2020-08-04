// 2020-08-04 20:52:26

/**
 * Definition for a binary tree node.
 * class TreeNode {
 *     val: number
 *     left: TreeNode | null
 *     right: TreeNode | null
 *     constructor(val?: number, left?: TreeNode | null, right?: TreeNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.left = (left===undefined ? null : left)
 *         this.right = (right===undefined ? null : right)
 *     }
 * }
 */

function isSymmetric(root: TreeNode | null): boolean {
  if (!root) return true;

  const stack: StackNode[] = [
    [root.left, root.right]
  ];

  while (stack.length > 0) {
    const [left, right] = stack.pop() as StackNode;
    if (!left && !right) continue;
    if (!left || !right) return false;
    if (left.val == right.val) {
      stack.push([left.left, right.right]);
      stack.push([left.right, right.left]);
    } else {
      return false;
    }
  }

  return true;
}

type StackNode = [
  TreeNode | null,
  TreeNode | null
];
