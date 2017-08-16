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
    TreeNode* invertTree(TreeNode* root) {
        
        if(root == NULL)
            return root;
        
        invert(root);
        
        return root;
    }
    
    void invert(TreeNode* root)
    {
        if(root->left == NULL && root->right == NULL)
        {
            return;
        }            
        else if(root->left == NULL)
        {
            root->left = root->right;
            root->right = NULL;
            invert(root->left);
            return;
        }
        else if(root->right == NULL)
        {
            root->right = root->left;
            root->left = NULL;
            invert(root->right);
            return;
        }
        
        TreeNode* node = root->left;
        root->left = root->right;
        root->right = node;
        node = NULL;
        
        invert(root->left);
        invert(root->right);       
                
    }
    
};