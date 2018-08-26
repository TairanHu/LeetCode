class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        
        int res = 0;
        map<vector<string>, int> tmp;
        
        for(int i = 0; i < A.size(); i++)
        {
            //string t = A[i];
            vector<string> tmp_string;
            
            string str1;
            string str2;
            
            for(int j = 0; j < A[i].size(); j++)
            {
                if(j%2)
                    str1 += A[i][j];
                else
                    str2 += A[i][j];
            }
            
            sort(str1.begin(), str1.end());
            sort(str2.begin(), str2.end());
            
            tmp_string.push_back(str2);
            tmp_string.push_back(str1);
            
            tmp[tmp_string]++;
            
            //tmp[A[i]]++;
        }
        
        return tmp.size();
        
    }
};