class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        vector<int> letter(26, 0);
        
        for(int i = 0; i < magazine.size(); i++)
        {
            letter[magazine[i]-'a']++;
        }
        
        for(int i = 0; i < ransomNote.size(); i++)
        {
            if(letter[ransomNote[i]-'a'] == 0)
            {
                return false;
            }
            letter[ransomNote[i]-'a']--;
        }
        
        return true;
    }
};