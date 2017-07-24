class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        vector<int> tmp;
        int res = 0;
        int sum = 0;
        int total = 0;

        for(int i = 0; i < gas.size(); i++)
        {
            int tmp = gas[i] - cost[i];
            sum += tmp;
            total += tmp;
            if(total < 0)
            {
                res = i+1;
                total = 0;
            }
        }
        
        if(sum < 0)
        {
            return -1;
        }
        if(res == gas.size())
        {
            return 0;
        }
        return res;
        
    }
};