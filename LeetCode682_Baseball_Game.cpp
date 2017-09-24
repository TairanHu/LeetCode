class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        vector<int> res;
        for(int i = 0; i < ops.size(); i++)
        {
            if(ops[i].size() == 1)
            {
                if(ops[i][0] == 'C')
                {
                    res.pop_back();
                }
                else if(ops[i][0] == 'D')
                {
                    int tmp = 2*res[res.size()-1];
                    res.push_back(tmp);
                }
                else if(ops[i][0] == '+')
                {
                    int tmp = res[res.size()-1] + res[res.size()-2];
                    res.push_back(tmp);
                }
                else
                {
                    res.push_back(ops[i][0] - '0');
                }
                continue;
            }
            
            int tmp = 0;
            int j = 0;
            if(ops[i][0] == '-' || ops[i][0] == '+')
            {
                j = 1;
            }
            
            for( ; j < ops[i].size(); j++)
            {
                tmp *= 10;
                tmp += ops[i][j] - '0';
            }
            
            if(ops[i][0] == '-')
                res.push_back(0-tmp);
            else 
                res.push_back(tmp);
            
            
        }
        
        int sum = 0;
        for(int i = 0; i < res.size(); i++)
        {
            sum += res[i];
            cout << res[i] << " ";
        }
        return sum;
        
    }
    
    int str2num(string s)
    {
        int num;
        stringstream ss(s);
        ss >> num;
        return num;
    }

};