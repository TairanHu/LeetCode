class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        
        int n = A.size();
        vector<int> res(n, -1);
        
        int cur1 = 0;
        int cur2 = 1;
        
        for(int i = 0; i < n; i++)
        {
            if(A[i]%2)
            {
                res[cur2] = A[i];
                cur2 += 2;
            }
            else
            {
                res[cur1] = A[i];
                cur1 += 2;
            }
                
        }
        
        return res;
        
    }
};