class NumArray {
public:
    NumArray(vector<int> nums) {
        if(nums.size() == 0)
            return;
        build_tree(0, nums.size()-1, nums, root);
    }
    
    void update(int i, int val) {
        update(i, val, root);
    }
    
    int sumRange(int i, int j) {
        return sumRange(i, j, root);
    }
    
    
    
private:
    
    typedef struct SegmentTreeNode
    {
        int start;
        int end;
        int sum;
        SegmentTreeNode* left;
        SegmentTreeNode* right;
        
    }SegmentTreeNode;
    
    SegmentTreeNode * root = new SegmentTreeNode();;
    
    void build_tree(int start, int end, vector<int> nums, SegmentTreeNode *root)
    {
        
        root->start = start;
        root->end = end;
        if(start == end)
        {
            //root = new SegmentTreeNode();
            //root->start = start;
            //root->end = end;
            root->sum = nums[start];
            root->left = NULL;
            root->right = NULL;
            return;
        }
        
        int mid = start + (end-start)/2;
        root->left = new SegmentTreeNode();
        root->right = new SegmentTreeNode();
        build_tree(start, mid, nums, root->left);
        build_tree(mid+1, end, nums, root->right);
        
        root->sum = root->left->sum + root->right->sum;
              
    }
    
    void update(int i, int val, SegmentTreeNode * root)
    {
        if(root->start == root->end)
        {
            root->sum = val;
            return;
        }
        
        int mid = root->start + (root->end - root->start)/2;
        if(i <= mid)
            update(i, val, root->left);
        else
            update(i, val, root->right);
        
        root->sum = root->left->sum + root->right->sum;
        //cout << root->sum << endl;
        
    }
    
    int sumRange(int i, int j, SegmentTreeNode *root) {
        if(i == root->start && j == root->end)
            return root->sum;
        
        int mid = root->start + (root->end - root->start)/2;
        if(j <= mid)
        {
            //root = root->left;
            return sumRange(i, j, root->left);
        }
        
        if(i > mid)
        {
            //root = root->right;
            return sumRange(i, j, root->right);
        }
        
        int sum = 0;
        //SegmentTreeNode * r = root;
        //root = r->left;
        sum += sumRange(i, mid, root->left);
        //root = r->right;
        sum += sumRange(mid+1, j, root->right);
        
        //cout << i << " " << j << " " << sum << endl;
        
        return sum;
        
    }

};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * obj.update(i,val);
 * int param_2 = obj.sumRange(i,j);
 */