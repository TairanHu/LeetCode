class Solution {
public:
    int calculate(string s) {
        
        int res = 0;
        vector<long> nums;
        vector<char> operations;
        string tmp;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
                continue;
            
            if(isdigit(s[i]))
            {
                tmp += s[i];
            }     
            else
            {
                operations.push_back(s[i]);
                nums.push_back(atoi(tmp.c_str()));
                tmp.clear();
            }          
        }
        nums.push_back(atoi(tmp.c_str()));
        
        for(int i = 0, pos = 0; i < operations.size(); pos++, i++)
        {
            if(operations[i] == '*')
            {
                nums[pos] = nums[pos]*nums[pos+1];
                nums.erase(nums.begin()+pos+1);
                pos--;
            }
            else if(operations[i] == '/')
            {
                nums[pos] = nums[pos]/nums[pos+1];
                nums.erase(nums.begin()+pos+1);
                pos--;
            }
            else if(operations[i] == '-')
            {
                nums[pos+1] = 0-nums[pos+1];
            }  
        }
        return accumulate(nums.begin(), nums.end(), 0);
        
    }
};