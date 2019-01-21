class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        vector<int> res;
        int size = A.size();
        for(int i = 0; i < size; i++)
        {
            res.push_back(A[i]*A[i]);
        }
        sort(res.begin(), res.end());
        
        return res;
    }
};