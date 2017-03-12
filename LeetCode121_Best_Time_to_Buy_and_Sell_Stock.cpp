class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size() <= 1)
        {
            return 0;
        }
        
        int res = prices[1] - prices[0];
        int minprice = prices[0];
        
        for(int i = 2; i < prices.size(); i++)
        {
            minprice = min(prices[i-1], minprice);
            res = res < prices[i] - minprice ? prices[i] - minprice : res;
        }
        
        if(res < 0)
        {
            return 0;
        }
        return res;
    }
};