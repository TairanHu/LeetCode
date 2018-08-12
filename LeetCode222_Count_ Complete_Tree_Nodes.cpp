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
    int countNodes(TreeNode* root) {
        
        int count_nodes = 0;
        int l_num = 0;
        int r_num = 0;
        
        TreeNode* l = root;
        TreeNode* r = root;
        
        while(l)
        {
            l_num++;
            l = l->left;
        }
        
        while(r)
        {
            r_num++;
            r = r->right;                
        }
        
        if(l_num == r_num)
            return (1 << l_num)-1;        
        
        return 1 + countNodes(root->left) + countNodes(root->right);
        
    }
    
};