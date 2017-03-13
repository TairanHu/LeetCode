class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int res = 0;
        if(prices.size() <= 1)	//不可省略，prices.size()无符号类型，prices.size()-1>0
        {
            return res;
        }
        
        for(int i = 0; i < prices.size()-1; i++)
        {
            if(prices[i+1] - prices[i] > 0)
            {
                res += prices[i+1] - prices[i];
            }
        }
        
        return res;
        
    }
};