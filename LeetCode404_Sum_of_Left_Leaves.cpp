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
    int sumOfLeftLeaves(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        
        if(root->left == NULL)
        {
            if(root->right == NULL)
                return 0;
            return sumOfLeftLeaves(root->right);
        }
        
        if(root->left->left == NULL)
        {
            if(root->right == NULL)
            {
                if(root->left->right == NULL)
                    return root->left->val;
                return sumOfLeftLeaves(root->left->right);
            }
            if(root->left->right == NULL)
                return root->left->val + sumOfLeftLeaves(root->right);
            
            return sumOfLeftLeaves(root->right) + sumOfLeftLeaves(root->left->right);
            
        }
        
        if(root->right == NULL)
        {
            return sumOfLeftLeaves(root->left);
        }
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
        
    }
};