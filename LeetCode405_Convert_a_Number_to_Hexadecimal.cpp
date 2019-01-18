class Solution {
public:
    string toHex(int num) {
        string HEX = "0123456789abcdef";
        string res;
        
        if(num == 0)
            return "0";
        int count = 0;
        while(num != 0 && count++ < 8)
        {
            res = HEX[num & 0x0f] + res;
            num = num >> 4;
        }
        
        return res;  
    }
};