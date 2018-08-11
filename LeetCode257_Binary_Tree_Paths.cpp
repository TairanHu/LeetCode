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
    
    vector<string> res;
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        if(root == NULL)
            return res;
        
        string tmp;
        get_ans(root, tmp);
        
        return res;
        
    }
    
    void get_ans(TreeNode* root, string &tmp)
    {
        if(root->left == NULL && root->right == NULL)
        {
            string t = tmp;
            t += to_string(root->val);
            res.push_back(t);
            return;
        }
        
        tmp += to_string(root->val);
        tmp += "->";
        
        if(root->left)
        {
            string t = tmp;
            get_ans(root->left, t);
        }
            
        
        if(root->right)
        {
            string t = tmp;
            get_ans(root->right, t); 
        }
                   
        
    }
    
};