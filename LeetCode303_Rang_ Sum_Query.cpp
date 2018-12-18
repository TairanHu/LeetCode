class NumArray {
public:
    NumArray(vector<int> nums) {
        
        for(int i = 1; i < nums.size(); i++)
        {
            nums[i] += nums[i-1];
        }
        sums = nums;
    }
    
    int sumRange(int i, int j) {
        if(i == 0)
            return sums[j];
        
        return sums[j] - sums[i-1];
    }
    
private:
    vector<int> sums;
    
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */