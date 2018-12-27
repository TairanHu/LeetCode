class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string, vector<string>> str_map;
        vector<vector<string>> res;
        
        for(int i = 0; i < strs.size(); i++)
        {
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            str_map[tmp].push_back(strs[i]);
        }
        
        map<string, vector<string>>::iterator iter;
        for(iter = str_map.begin(); iter != str_map.end(); iter++)
        {
            res.push_back(iter->second);
        }
        
        return res;
        
    }
};