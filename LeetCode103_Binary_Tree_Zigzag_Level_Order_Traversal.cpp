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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>> result;
        
        
        get_result(root, result, 1);
        
        for(int i = 1; i < result.size();)
        {
            for(int j = 0; j < result[i].size()/2; j++)
            {
                int t = result[i][j];
                result[i][j] = result[i][result[i].size()-1-j];
                result[i][result[i].size()-1-j] = t;
            }
            
            i += 2;
            
        }
        
        return result;
        
    }
    
    void get_result(TreeNode* Node, vector<vector<int>>& result, int row)
    {
        if(Node == NULL)
        {
            return;
        }
        
        //tmp.push_back(Node->val);
        
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