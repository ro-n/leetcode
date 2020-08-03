// 2020-08-03 23:59:37

import java.util.Stack;

/**
 * Definition for a binary tree node. public class TreeNode { int val; TreeNode
 * left; TreeNode right; TreeNode() {} TreeNode(int val) { this.val = val; }
 * TreeNode(int val, TreeNode left, TreeNode right) { this.val = val; this.left
 * = left; this.right = right; } }
 */
class Solution {
    public boolean isSymmetric(TreeNode root) {
        if (root == null)
            return true;

        Stack<TreeNode> stack = new Stack<>();
        stack.push(root.left);
        stack.push(root.right);

        while (!stack.empty()) {
            TreeNode l = stack.pop(), r = stack.pop();
            if (l == null && r == null)
                continue;
            if (l == null || r == null)
                return false;
            if (l.val != r.val)
                return false;

            stack.push(l.left);
            stack.push(r.right);
            stack.push(l.right);
            stack.push(r.left);
        }

        return true;
    }
}