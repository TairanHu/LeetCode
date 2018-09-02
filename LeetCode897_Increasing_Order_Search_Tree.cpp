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
    TreeNode* increasingBST(TreeNode* root) {
        
        TreeNode* res = node;
        
        get_ans(root);
        
        return res->right;
        
    }
    
    void get_ans(TreeNode* root)
    {
        if(root == NULL)
            return;
        
        get_ans(root->left);
        TreeNode* tmp = new TreeNode(root->val);
        node->right = tmp;
        node = node->right;
        get_ans(root->right);
    }
    
private:
    TreeNode* node = new TreeNode(0);
    
};