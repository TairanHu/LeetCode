class Solution {
public:
    bool detectCapitalUse(string word) {
        bool result = 0;
        bool flag_upper = 1;
        bool flag_lower = 1;
        
        if(word.size() <= 1)
        {
            return true;
        }
        
        
        for(int i = 1; i < word.size(); i++)
        {
            if(islower(word[i]) && flag_lower)
            {
                //flag_lower = 0;
                //continue;
            }
            else
            {
                flag_lower = 0;
            }
            
            
            if(isupper(word[i]) && flag_upper)
            {
                //flag_upper = 0;
                //continue;
            }
            else
            {
                flag_upper = 0;
            }
            
        }
        
        if(isupper(word[0]))
        {
            if(flag_upper || flag_lower)
            {
                return true;
            }
        }
        else
        {
            if(flag_lower)
            {
                return true;
            }
        }
        
        return false;

    }
};