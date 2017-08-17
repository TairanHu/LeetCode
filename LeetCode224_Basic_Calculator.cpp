class Solution {
public:
    int calculate(string s) {
        
        int sign = 1;
        int res = 0;
        stack<int> tmp;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
                continue;
            int num = 0;
            while(i < s.size() && s[i] >= '0')
            {
                num *= 10;
                num += s[i++] - '0';
            }
            
            res += sign*num;
            
            if(i >= s.size())
            {
                break;
            }            
            else if(s[i] == '+')
                sign = 1;
            else if(s[i] == '-')
                sign = -1;
            else if(s[i] == '(')
            {
                tmp.push(res);
                tmp.push(sign);
                res = 0;
                sign = 1;
            }
            else if(s[i] == ')')
            {
                res *= tmp.top(); tmp.pop();
                res += tmp.top(); tmp.pop();
            }            
        }
        
        return res;
        
    }
};