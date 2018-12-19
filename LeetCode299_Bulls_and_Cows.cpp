class Solution {
public:
    string getHint(string secret, string guess) {
        
        int bulls = 0;
        int cows = 0;
        vector<int> count_se(10, 0);
        vector<int> count_gu(10, 0);
        
        for(int i = 0; i < secret.size(); i++)
        {
            if(secret[i] == guess[i])
            {
                bulls++;
            }                
            else
            {
                count_se[secret[i]-'0']++;
                count_gu[guess[i]-'0']++;
            }
        }
        
        for(int i = 0; i < 10; i++)
        {
            cows += min(count_se[i], count_gu[i]);
        }
        
        return to_string(bulls) + 'A' + to_string(cows) + 'B';
        
    }
};