class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> tmp;
        int res = 0;
        
        int size = s.size();
        for(int i = 0; i < size; i++ )
        {
            tmp[s[i]]++;
        }
        
        map<char, int>::iterator iter;
        for(iter = tmp.begin(); iter != tmp.end(); iter++)
        {
            if(iter->second % 2)
                res += iter->second - 1;
            else
                res += iter->second;
        }
        
        if(res >= size)
            return res;
        
        return res+1;
        
    }
};