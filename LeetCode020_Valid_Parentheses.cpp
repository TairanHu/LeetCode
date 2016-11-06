class Solution {
public:
    bool isValid(string s) {
        //æ≠µ‰’ª¿‡–Õ
        stack<char> tmp;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                tmp.push(s[i]);
                continue;
            }
            
            if(tmp.size() == 0)
            {
                return false;
            }
            
            if(s[i] == ')')
            {
                if(tmp.top() == '(')
                {
                    tmp.pop();
                    continue;
                }
                else
                {
                    return false;
                }
            }
            
            if(s[i] == ']')
            {
                if(tmp.top() == '[')
                {
                    tmp.pop();
                    continue;
                }
                else
                {
                    return false;
                }
            }
            
            if(s[i] == '}')
            {
                if(tmp.top() == '{')
                {
                    tmp.pop();
                    continue;
                }
                else
                {
                    return false;
                }
            }
            
        }
        if(tmp.size() > 0)
        {
            return false;
        }
        return true;
        
    }
};