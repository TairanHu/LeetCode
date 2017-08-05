class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        vector<int> v1;
        vector<int> v2;
        
        string str1;
        string str2;
        
        for(int i = 0; i < version1.size(); i++)
        {
            if(version1[i] == '.')
            {
                v1.push_back(atoi(str1.c_str()));
                str1.clear();
                continue;
            }
            str1 += version1[i];
        }
        v1.push_back(atoi(str1.c_str()));
        
        for(int i = 0; i < version2.size(); i++)
        {
            if(version2[i] == '.')
            {
                v2.push_back(atoi(str2.c_str()));
                str2.clear();
                continue;
            }
            str2 += version2[i];
        }
        v2.push_back(atoi(str2.c_str()));
        
        int small_size = v1.size() > v2.size() ? v2.size() : v1.size();
        for(int i = 0; i < small_size; i++)
        {
            if(v1[i] > v2[i])
                return 1;
            if(v1[i] < v2[i])
                return -1;
        }
        
        if(v1.size() > v2.size())
        {
            for(int i = small_size; i < v1.size(); i++)
            {
                if(v1[i] != 0)
                    return 1;
            }
        }
        if(v1.size() < v2.size())
        {
            for(int i = small_size; i < v2.size(); i++)
            {
                if(v2[i] != 0)
                    return -1;
            }
        }
        
        return 0;
        
    }
};