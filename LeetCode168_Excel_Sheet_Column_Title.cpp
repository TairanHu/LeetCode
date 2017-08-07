class Solution {
public:
    string convertToTitle(int n) {
        string res;
        
        while(n > 26)
        {
            int tmp = (n-1)%26;
            res += tmp + 'A';
            n = (n-1)/26;
        }
        res += n-1 + 'A';
        
        reverse(res.begin(), res.end());
        return res;
    }
};