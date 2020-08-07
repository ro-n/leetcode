// 2020-08-07 16:24:17

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

function isSameTree(p: TreeNode | null, q: TreeNode | null): boolean {
  const stack: StackNode[] = [
    [p, q]
  ];

  while (stack.length > 0) {
    const [left, right] = stack.pop() as StackNode;
    if (!left && !right) continue;
    if (!left || !right) return false;
    if (left.val == right.val) {
      stack.push([left.left, right.left]);
      stack.push([left.right, right.right]);
    } else {
      return false;
    }
  }

  return true;
};

type StackNode = [
  TreeNode | null,
  TreeNode | null
];