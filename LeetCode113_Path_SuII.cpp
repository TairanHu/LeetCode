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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        
        vector<vector<int>> result;
        vector<int> tmp;
        
        get_path(result, tmp, root, sum);
        
        return result;
        
    }
    
    void get_path(vector<vector<int>>& result, vector<int>& tmp, TreeNode* root, int sum)
    {
        
        if(root == NULL)
        {
            return;
        }
        
        sum -= root->val;
        if(root->left == NULL && root->right == NULL)
        {
            if(sum == 0)
            {
                tmp.push_back(root->val);
                result.push_back(tmp);
                tmp.pop_back();
            }
            return;
        }
        
        
        tmp.push_back(root->val);
        get_path(result, tmp, root->left, sum);
        get_path(result, tmp, root->right, sum);
        tmp.pop_back();
        
    }
    
};