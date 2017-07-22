class Solution {
public:
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> res;
        vector<string> tmp;

        get_palindrome(s, tmp, res, 0);
        
        return res;       
        
    }
    
    void get_palindrome(string s, vector<string>& tmp, vector<vector<string>>& res, int p)
    {
        if(p == s.size())
        {
            res.push_back(tmp);
            return;
        }
        
        for(int i = p; i < s.size(); i++)
        {
            if(check_palindrome(s, p, i))
            {
                tmp.push_back(s.substr(p, i+1-p));
                get_palindrome(s, tmp, res, i+1);
                tmp.pop_back();
            }
        }
        
    }
    
    bool check_palindrome(string s, int l, int r)
    {
        while(l < r)
        {
            if(s[l++] != s[r--])
            {
                return false;
            }
        }
        return true;
    }
    
    
};