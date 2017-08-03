class Solution {
public:
    void reverseWords(string &s) {
        
        int to;
        int from = 0;
        
        for(to = 0; to < s.size(); to++)
        {
            if(s[to] == ' ')
            {
                ReverseString(s, from, to-1);
                from = to+1;
            }
        }
        ReverseString(s, from, to-1);
        ReverseString(s, 0, to-1);
        
        int i = 0;
        while(i < s.size() && s[i] == ' ')
        {
            s.erase(0, 1);
        }
        
        for(i = 1; i < s.size(); )
        {
            if(s[i-1] == ' ' && s[i] == ' ')
            {
                s.erase(i, 1);
            }
            else
            {
                i++;
            }
        }
        
        i = s.size()-1;
        while(i >= 0 && s[i] == ' ')
        {
            s.erase(i, 1);
            i--;
        }
        
    }
    
    void ReverseString(string &s, int from, int to)
    {
        while(from < to)
        {
            char t = s[from];
            s[from++] = s[to];
            s[to--] = t;
        }
    }
    
};