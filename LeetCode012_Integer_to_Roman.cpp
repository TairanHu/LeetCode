class Solution {
public:
    string intToRoman(int num) {
        
        vector<string> Roman{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int> nums{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        string res;
        int cur = 0;
        while(num > 0)
        {
            int count = num/nums[cur];
            for(int i = 0; i < count; i++)
                res += Roman[cur];
            
            num = num - count*nums[cur];
            cur++;
        }
        
        return res;
    }
};