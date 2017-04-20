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
    int maxPathSum(TreeNode* root) {
        
        int res = INT_MIN;
        
        int t = max_num(root, res);
        
        return res;
    }
    
    int max_num(TreeNode* root, int& res)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        if(root->left == NULL && root->right == NULL)
        {
            res = max(res, root->val);
            return root->val;
        }
        
        int max_left = max_num(root->left, res);
        int max_right = max_num(root->right, res);
        
        int tmp = max(max_left, max_right) + root->val;
        tmp = max(tmp, root->val);
        
        res = max(res, tmp);
        res = max(res, max_left+max_right+root->val);
        
        return tmp;
        
    }
    
};