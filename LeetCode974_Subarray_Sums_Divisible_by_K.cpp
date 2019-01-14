class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int len = A.size();
        vector<int> mod(K, 0);
  
        int sum = 0; 
        for (int i = 0; i < len; i++) 
        { 
            sum += A[i]; 
            mod[((sum % K) + K) % K]++; 
        } 

        int res = 0;

        for (int i = 0; i < K; i++) 
        {
            if (mod[i] > 1) 
                res += (mod[i] * (mod[i] - 1)) / 2;
        }

        res += mod[0]; 

        return res; 
        
    }
};