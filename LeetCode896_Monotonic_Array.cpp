class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        if(A.size() <= 2)
            return true;
        
        bool flag;
        
        int i;
        for(i = 1; i < A.size(); i++)
        {
            if(A[i] != A[i-1])
            {
                flag = A[i] - A[i-1] > 0 ? 1 : 0;
                i++;
                break;
            }
        }
        
        for(; i < A.size(); i++)
        {
            if(A[i] == A[i-1])
                continue;
            
            if(flag)
            {
                if(A[i] - A[i-1] < 0)
                    return false;
            }
            else
            {
                if(A[i] - A[i-1] > 0)
                    return false;
            }
        }
        
        return true;
        
    }
};