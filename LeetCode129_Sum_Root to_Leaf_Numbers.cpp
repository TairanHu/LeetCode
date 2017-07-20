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
    int sumNumbers(TreeNode* root) {

        return get_res(root, 0)/10;
                
    }
    
    long get_res(TreeNode* root, long ans)
    {
        if(root == NULL)
        {
            return ans;
        }
        
        ans = (ans + root->val)*10;
        
        if(root->left != NULL && root->right != NULL)
        {
            return get_res(root->left, ans) + get_res(root->right, ans);
        }
        if(root->left != NULL)
        {
            return get_res(root->left, ans);
        }
        if(root->right != NULL)
        {
            return get_res(root->right, ans);
        }
        
        return ans;
        
    }
    
};