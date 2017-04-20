/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
        string ans;
        stringstream ss;
        
        ser(root, ss);
        
        return ss.str();
    }
    
    void ser(TreeNode* root, stringstream& ss)
    {
        if(root == NULL)
        {
            ss << 'n';
            return;
        }
        
        ss << ',' << root->val;
        
        ser(root->left, ss);
        ser(root->right, ss);
        
    }
    
    string num2str(int i)
    {
            stringstream ss;
            ss<<i;
            return ss.str();
    }
    
    int str2num(string s)
    {   
        int num;
        stringstream ss(s);
        ss>>num;
        return num;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
        stringstream ss(data);
        return deser(ss);
    }
    
    TreeNode* deser(stringstream& ss)
    {
        char ch;
        ss >> ch;
        
        if(ch == 'n')
        {
            return NULL;
        }
        
        int x;
        ss >> x;
        
        TreeNode* root = new TreeNode(x);
        root->left = deser(ss);
        root->right = deser(ss);
        
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));



Memory Limit Exceeded£º
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        
        string ans = "[";
        
        ser(root, ans);
        
        //ans[ans.size()-1] = "]";
        ans += "]";
        
        return ans;
    }
    
    void ser(TreeNode* root, string& ans)
    {
        if(root == NULL)
        {
            ans += "null,";
            return;
        }
        
        ans += num2str(root->val) + ",";
        ser(root->left, ans);
        ser(root->right, ans);
        
    }
    
    string num2str(int i)
    {
            stringstream ss;
            ss<<i;
            return ss.str();
    }
    
    int str2num(string s)
    {   
        int num;
        stringstream ss(s);
        ss>>num;
        return num;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        
        int pos = 1;
        return deser(data, pos);
        
    }
    
    TreeNode* deser(string data, int& pos)
    {
        if(data[pos] == ']')
        {
            return NULL;
        }
        
        if(data[pos] == 'n')
        {
            pos += 5;
            //root == NULL;
            return NULL;
        }
        
        string tmp;
        if(data[pos] == '-')
        {
            tmp += data[pos++];
        }
        while(data[pos] >= '0' && data[pos] <= '9')
        {
            tmp += data[pos++];
        }
        
        pos++;
        TreeNode* r = new TreeNode(str2num(tmp));
        r->left = deser(data, pos);
        r->right = deser(data, pos);
        
        return r;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));