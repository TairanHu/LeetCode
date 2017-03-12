class Solution {
public:
    string reverseStr(string s, int k) {
        
        string result;
        
        for(int i = 0; i < s.size(); i += 2*k)
        {
            int j = result.size()+k;
            if(i+k > s.size())
            {
                int t = s.size()-result.size();
                j = s.size();
                while(t--)
                {
                    result += s[--j];
                }
                break;
            }
            
            if(i+2*k > s.size())
            {
                j = result.size()+k;
                int t = k;
                while(t--)
                {
                    result += s[--j];
                }
                
                j = s.size()-result.size();
                while(j--)
                {
                    result += s[s.size()-1-j];
                }
                break;
                
            }
            
            int t = k;
            while(t--)
            {
                result += s[--j];
            }
            j = result.size()+k;
            while(result.size() < j)
            {
                result += s[result.size()];
            }
            
        }
        
        return result;
        
        
    }
};