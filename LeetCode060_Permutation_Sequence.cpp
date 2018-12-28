class Solution {
public:
    string getPermutation(int n, int k) {
        
        string res;
        string t;
        int tmp = 1;
        for(int i = 1; i <= n; i++)
        {
            tmp *= i;
            t += i+'0';
        }
        
        for(int i = n; i >= 1; i--)
        {
            tmp /= i;
            int index = (k-1)/tmp;
            
            res += t[index];
            t.erase(index, 1);
            k -= tmp*index; 
        }
        
        return res;
    }
};


class Solution {
public:
    string getPermutation(int n, int k) {
        
        string res;
        for(int i = 0; i < n; i++)
        {
            res += i + '1';
        }
        
        while(--k)
        {
            next_permutation(res.begin(), res.end());
        }
        
        return res;
    }
};