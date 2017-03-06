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
    bool isBalanced(TreeNode* root) {
        
        return get_depth(root)==-1 ? false : true;
        
    }
    
    int get_depth(TreeNode* Node)
    {
        if(Node == NULL)
        {
            return 0;
        }
        
        int left_dep = get_depth(Node->left);
        if(left_dep == -1)
        {
            return -1;
        }
        
        int right_dep = get_depth(Node->right);
        if(right_dep == -1)
        {
            return -1;
        }
        
        if(abs(left_dep - right_dep) > 1)
        {
            return -1;
        }
        
        return max(left_dep, right_dep)+1;
        
    }
    
};