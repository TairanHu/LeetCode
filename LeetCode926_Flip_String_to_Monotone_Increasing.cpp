class Solution {
public:
    int minFlipsMonoIncr(string S) {
        
        int i;
        bool flag = 0;
        int ans = S.size();
        int change = 0;
        for(i = 0; i < S.size(); i++)
        {
            if(S[i] == '1')
                flag = 1;   
            
            if(flag)
            {
                int change_tmp = 0;
                for(int j = i; j < S.size(); j++)
                {
                    if(S[j] == '0')
                        change_tmp++;
                }
                
                change += change_tmp;
                ans = ans > change ? change : ans;
                
                change -= change_tmp;
                change++;
                flag = 0;
            }                  
            
            
        }
        
        ans = ans > change ? change : ans;
        return ans;
        
        
    }
    
};