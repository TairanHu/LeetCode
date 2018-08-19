class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> res;
        
        for(int i = 0; i < words.size(); i++)
        {
            map<char, char> pp;
            map<char, char>::iterator iter;
            
            string tmp = pattern;
            
            for(int j = 0; j < pattern.size(); j++)
            {
                iter = pp.find(pattern[j]);
                if(iter != pp.end())
                {
                    tmp[j] = pp[pattern[j]];
                }
                else
                {
                    tmp[j] = words[i][j];
                    pp[pattern[j]] = words[i][j];
                }

            }

            
            if(tmp == words[i])
            {
                map<char, char>::iterator iter1;
                map<char, char>::iterator iter2;
                
                bool flag = 1;
                
                for(iter1 = pp.begin(); iter1 != pp.end(); iter1++)
                {
                    for(iter2 = pp.begin(); iter2 != pp.end(); iter2++)
                    {
                        if(iter1->first != iter2->first && iter1->second == iter2->second)
                        {
                            flag = 0;
                            break;
                        }
                        else if(iter1->first == iter2->first && iter1->second != iter2->second)
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
                
                if(flag)
                    res.push_back(words[i]);
                
            }
        }
       
        return res; 
    }
};