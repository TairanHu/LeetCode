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
    int maxDepth(TreeNode* root) {
        
        int result = 0;
        int row = 0;
        
        get_result(result, row+1, root);
        
        return result;
        
    }
    
    void get_result(int& result, int row, TreeNode* Node)
    {
        if(Node == NULL)
        {
            return;
        }
        if(row > result)
        {
            result = row;
        }
        
        get_result(result, row+1, Node->left);
        get_result(result, row+1, Node->right);
        
    }
    
};