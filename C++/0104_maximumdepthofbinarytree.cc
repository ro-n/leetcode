// Thu Apr 29 10:08:58 2021

class Solution {
public:
  int maxDepth(TreeNode* root) {
    if (root == nullptr) {
      return 0;
    } else if (root->left == nullptr) {
      return maxDepth(root->right) + 1;
    } else if (root->right == nullptr) {
      return maxDepth(root->left) + 1;
    } else {
      return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
  }
};
