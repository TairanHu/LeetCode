class Solution {
public:
    int maxTurbulenceSize(vector<int>& A) {
        
        if(A.size() == 1)
            return 1;
        
        int res = 2;
        int count = 2;
        int size = A.size();
        for(int i = 2; i < size; i++)
        {
            if( (A[i]>A[i-1]) && (A[i-1]<A[i-2]) || (A[i]<A[i-1]) && (A[i-1]>A[i-2]) )
            {
                count++;
            }
            else
            {
                res = res > count ? res : count;
                count = 2;
            }
        }
        res = res > count ? res : count;
        return res;
    }
};