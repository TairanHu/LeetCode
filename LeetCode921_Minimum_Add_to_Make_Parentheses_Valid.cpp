class Solution {
public:
    int minAddToMakeValid(string S) {
        
        int left = 0;
        int right = 0;
        
        for(int i = 0; i < S.size(); i++)
        {
            if(S[i] == '(')
            {
                left++;
            }
            else 
            {
                if(left > 0)
                    left--;
                else
                    right++;
            }
        }
        
        return left + right;
        
    }
};