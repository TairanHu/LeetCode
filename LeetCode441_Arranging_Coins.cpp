class Solution {
public:
    int arrangeCoins(int n) {
        return (int)((sqrt((long long)n*8+1) - 1)/2);
    }
};