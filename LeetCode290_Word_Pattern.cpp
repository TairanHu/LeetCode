class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> strs;
        map<char, string> str_map;
        string tmp;
        
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == ' ')
            {
                if(tmp.size() > 0)
                    strs.push_back(tmp);
                tmp.clear();
                continue;
            }
            
            tmp += str[i];
        }
        if(tmp.size() > 0)
            strs.push_back(tmp);
        
        
        if(strs.size() != pattern.size())
            return false;
        
        for(int i = 0; i < pattern.size(); i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(pattern[j] == pattern[i])
                {
                    if(strs[j] != strs[i])
                    {
                        return false;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    if(strs[j] == strs[i])
                    {
                        return false;
                    }
                    else
                    {
                        continue;
                    }
                }
            }     
        }
        
        return true;
        
    }
};