class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size() < 2)
            return 0;
        
        vector<int> buy_dp(prices.size(), 0);
        vector<int> sell_dp(prices.size(), 0);
        
        buy_dp[0] = -prices[0];
        sell_dp[0] = 0;
        
        buy_dp[1] = max(-prices[0], -prices[1]);
        sell_dp[1] = max(0, buy_dp[0] + prices[1]);
        
        for(int i = 2; i < prices.size(); i++)
        {
            buy_dp[i] = max(buy_dp[i-1], sell_dp[i-2]-prices[i]);
            sell_dp[i] = max(buy_dp[i-1]+prices[i], sell_dp[i-1]);
        }
        
        return max(sell_dp[prices.size()-1], sell_dp[prices.size()-2]);
        
    }
};



//copy from the internet
//3 state s0,s1,s2
//s0 sell-wait or wait-wait
//s1 buy-wait or wait-buy
//s2 wait-sell
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        if(prices.size() < 2)
            return 0;
        
        int s0 = 0;
        int s1 = -prices[0];
        int s2 = INT_MIN;
        for (int i = 1; i < prices.size(); i++)
        {
            int pre0 = s0;
            int pre1 = s1;
            int pre2 = s2;
            s0 = max(pre0, pre2);
            s1 = max(pre0 - prices[i], pre1);
            s2 = pre1 + prices[i];
        }
        
        return max(s0, s2);
        
    }
};