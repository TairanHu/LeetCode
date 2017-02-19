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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        vector<int> tmp;
        
        get_result(root, result, tmp, 1);
        return result;
        
        
    }
    
    void get_result(TreeNode* Node, vector<vector<int>>& result, vector<int>& tmp, int row)
    {
        if(Node == NULL)
        {
            return;
        }
        
        //tmp.push_back(Node->val);
        
        if(result.size() < row)
        {
            result.push_back(tmp);
        }
        result[row-1].push_back(Node->val);
        
        
        get_result(Node->left, result, tmp, row+1);
        get_result(Node->right, result, tmp, row+1);
        
    }
    
};