class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        
        vector<int> a(d.size(), -2);
        int mm = -1;
        int tt = -1;
        
        for(int i = 0; i < d.size(); i++)
        {
            int j = 0;
            //int k = 0;
            
            for(int k = 0; k < s.size(); k++)
            {
                if(d[i][j] == s[k])
                {
                    j++;
                }
                
                if(j == d[i].size())
                {
                    a[i] = d[i].size();
                }
            }
        }
        
        for(int i = 0; i < d.size(); i++)
        {
            if(mm == a[i])
            {
                if(d[tt] > d[i])
                {
                    tt = i;
                }
            }
            if(mm < a[i])
            {
                mm = a[i];
                tt = i;
            }
            //mm = max(mm, a[i]);
        }
        
        if(tt < 0)
        {
            string tmp;
            return tmp;
        }
        
        return d[tt];
        
    }
    
    
};