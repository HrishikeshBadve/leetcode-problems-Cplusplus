/*
Given the root of a binary tree, determine if it is a valid binary search tree (BST).
A valid BST is defined as follows:
The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 
Example:
Input: root = [2,1,3]
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
    bool isValidBST(TreeNode* root) {
        
        return valid(root,LONG_MIN,LONG_MAX);
    }
    bool valid(TreeNode* root,long left,long right)
    {
        if(root==NULL)
        {
            return true;
        }
        if(root->val <= left || root->val >= right)
        {
            return false;
        }
        return(valid(root->left,left,root->val) && valid(root->right,root->val,right));
    }
};
