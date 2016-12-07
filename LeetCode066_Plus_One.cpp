class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        vector<int> result;
        bool carry_flag = 1;
        
        int i;
        for(i = digits.size()-1; i >= 0; i--)
        {
            if(digits[i] != 9)
            {
                digits[i] += 1;
                break;
            }
            digits[i] = 0;
        }
        
        if(i >= 0)
        {
            return digits;
        }
        
        result.push_back(1);
        for(int j = 0; j < digits.size(); j++)
        {
            result.push_back(digits[j]);
        }
        return result;
        
    }
};