
//¿¨ÌØÀ¼Êı

class Solution {
public:
    int numTrees(int n) {
        vector<int> res;
        res.push_back(1);
        res.push_back(1);
        
        for(int i = 2; i <= n; i++)
        {
            res.push_back(0);
            for(int j = 0; j < i; j++)
            {
                res[i] += res[j] * res[i-j-1];   
            }
        }
        
        return res.back();
    }
};