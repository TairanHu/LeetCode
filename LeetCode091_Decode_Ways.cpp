class Solution {
public:
    int numDecodings(string s) {
        
        if(s.size() == 0 || s[0] == '0')
        {
            return 0;
        }
        
        vector<int> num;
        num.push_back(1);
        
        for(int i = 1; i <= s.size(); i++)
        {
            num.push_back( (s[i - 1] == '0') ? 0 : num[i - 1] );
            
            if (i > 1 && (s[i - 2] == '1' || (s[i - 2] == '2' && s[i - 1] <= '6'))) 
            {
                num[i] += num[i - 2];
            }
            
        }
        return num[s.size()];
    }
};