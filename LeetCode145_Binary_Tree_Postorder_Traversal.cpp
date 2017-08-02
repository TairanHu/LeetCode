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
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> res;
        get_answer(res, root);
        
        return res;
    }
    
    void get_answer(vector<int>& res, TreeNode* root)
    {
        if(root == NULL)
        {
            return;
        }        
        get_answer(res, root->left);
        get_answer(res, root->right);
        res.push_back(root->val);
    }
    
};