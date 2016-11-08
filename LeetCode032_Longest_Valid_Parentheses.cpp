class Solution {
public:
    int longestValidParentheses(string s) {
        int result = 0;
        int max = 0;
        int sum = 0;
        stack<int> tmp;
        
	//先剔除开题")"，好像也没有必要
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ')')
            {
                s.erase(s.begin()+i);
                i--;
            }
            else
            {
                break;
            }
        }
        
        //cout << s;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(')
            {
                tmp.push(i);
                continue;
            }
            //分别整合合法子串长度
            if(tmp.size() == 0)
            {
                sum = 0;
                continue;
            }
            
            result = i - tmp.top() + 1;
            tmp.pop();
            
            if(tmp.size() == 0)
            {
                
                sum += result;
                if(sum > max)
                    max = sum;
            }
            else 
            {
                
                result = i - tmp.top();
                if(result > max)
                    max = result;
                
            }
        }
        
        return max;
        
    }
};