class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        
        
        sort(A.begin(), A.end());
        
        int dis = A[A.size()-1] - A[0];
        
        if(dis > 2*K)
        {
            return dis - 2*K;
        }
        
        return 0;
        
    }
};