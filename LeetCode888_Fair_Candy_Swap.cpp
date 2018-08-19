class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        
        vector<int> res;
        
        long long sum_a = 0;
        long long sum_b = 0;
        
        sum_a = accumulate(A.begin(), A.end(), 0);
        sum_b = accumulate(B.begin(), B.end(), 0);
        
        for(int i = 0; i < A.size(); i++)
        {
            for(int j = 0; j < B.size(); j++)
            {
                long long tmp_a = sum_a - A[i] + B[j];
                long long tmp_b = sum_b + A[i] - B[j];
                
                //tmp_a += B[j];
                //tmp_b -= B[j];
                
                if(tmp_a == tmp_b)
                {
                    res.push_back(A[i]);
                    res.push_back(B[j]);
                    return res;
                }
                
            }
        }
        
        return res;
        
        
    }
};