class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> nums;
        
        for(int i = 0; i < tokens.size(); i++)
        {
            if (tokens[i] == "+")
            {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();
                nums.push(a+b); 
            }
            else if (tokens[i] == "-")
            {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();
                nums.push(b-a); 
            }
            else if (tokens[i] == "*")
            {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();
                nums.push(a*b); 
            }
            else if (tokens[i] == "/")
            {
                int a = nums.top(); nums.pop();
                int b = nums.top(); nums.pop();
                nums.push(b/a); 
            }
            else
            {
                int num = atoi(tokens[i].c_str());
                nums.push(num);
            }           
            
        }
        return nums.top();
    }
};