/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        
        if(root == NULL)
        {
            return false;
        }
        
        if(root->left == NULL && root->right == NULL)
        {
            if(sum == root->val)
            {
                return true;
            }
            return false;
        }
        
        if(root->left == NULL)
        {
            return hasPathSum(root->right, sum-root->val);
        }
        if(root->right == NULL)
        {
            return hasPathSum(root->left, sum-root->val);
        }
        
        return (hasPathSum(root->right, sum-root->val) || hasPathSum(root->left, sum-root->val));
        
    }
};