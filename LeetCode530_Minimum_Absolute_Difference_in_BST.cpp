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
    int getMinimumDifference(TreeNode* root) {
        
        vector<int> res_tmp;
        int result = INT_MAX;
        
        get_result(root, res_tmp);
        
        sort(res_tmp.begin(), res_tmp.end());
        
        for(int i = 0; i < res_tmp.size()-1; i++)
        {
            result = min(result, res_tmp[i+1] - res_tmp[i]);
        }
        
        return result;
        
    }
    
    void get_result(TreeNode* Node, vector<int> &res_tmp)
    {
        if(Node == NULL)
        {
            return;
        }
        
        res_tmp.push_back(Node->val);
        
        get_result(Node->left, res_tmp);
        get_result(Node->right, res_tmp);
        
    }
    
};