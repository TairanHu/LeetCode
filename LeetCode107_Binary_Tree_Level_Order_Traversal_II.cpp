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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> result;
        vector<vector<int>> result1;
        
        get_result(root, result, 1);
        
        for(int i = result.size()-1; i >= 0; i--)
        {
            result1.push_back(result[i]);
        }
        
        return result1;
    }
    
    void get_result(TreeNode* Node, vector<vector<int>>& result, int row)
    {
        if(Node == NULL)
        {
            return;
        }
        
        
        if(result.size() < row)
        {
            vector<int> tmp;
            result.push_back(tmp);
        }
        result[row-1].push_back(Node->val);
        
        
        get_result(Node->left, result, row+1);
        get_result(Node->right, result, row+1);
        
    }
    
};