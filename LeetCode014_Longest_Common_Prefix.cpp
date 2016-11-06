class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size() == 0)
        {
            return "";
        }
        
        int pos = 0;
        int size = 0;
        int i = 0, j = 1;
        string tmp = strs[0];
        cout << strs.size();
        for(i = 1; i < strs.size(); i++)
        {
            //size = min(strs[i].size(), tmp.size());
            if(strs[i].size() < tmp.size())
            {
                tmp.erase(strs[i].size());
            }
            size = tmp.size();
            
            for(j = 0; j < size; j++)
            {
                if(strs[i][j] != tmp[j])
                {
                    //if(j == 0)
                    //    return "";
                        
                    tmp.erase(j);
                    break;
                }
            }
            
        }
        return tmp;
    }
};