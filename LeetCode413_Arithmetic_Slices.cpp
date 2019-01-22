class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        
        int count = 0;
        int res = 0;
        for(int i = 2; i < A.size(); i++)
        {
            if(A[i] - A[i-1] == A[i-1] - A[i-2])
                count++;
            else
                count = 0;
            
            res += count;
        }
        
        return res;
    }
};