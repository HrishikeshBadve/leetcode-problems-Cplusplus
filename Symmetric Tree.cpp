/*
Given the root of a binary tree, check whether it is a mirror of itself (i.e., symmetric around its center).

Example:
Input: root = [1,2,2,3,4,4,3]
Output: true
*/

/*
Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
};
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return dfs(root->left,root->right);
    }
    bool dfs(TreeNode* left,TreeNode* right)
    {
        if(left==NULL && right==NULL)
        {
            return true;
        }
        if(left==NULL || right==NULL)
        {
            return false;
        }
        if(left->val != right->val)
        {
            return false;
        }
        return(dfs(left->left,right->right) && dfs(left->right, right-> left));
    }
};
