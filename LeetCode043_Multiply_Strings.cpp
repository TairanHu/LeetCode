class Solution {
public:
    string multiply(string num1, string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        string result;
        vector<int> tmp(n1+n2, 0);
        
        int num_sum = num1.size()-1 + num2.size()-1;
        
        for(int i = 0; i < num1.size(); i++)
        {
            for(int j = 0; j < num2.size(); j++)
            {
                //tmp.push_back( (num1[i] - '0')*(num2[j] - '0') );
                tmp[num_sum-i-j] += (num1[i] - '0')*(num2[j] - '0');
            }
        }
        
        int upbit = 0;
        for(int i = 0; i < tmp.size(); i++)
        {
            tmp[i] += upbit;
            upbit = tmp[i]/10;
            tmp[i] = tmp[i]%10;
        }
        
        //去除开头的0，如果到最后一位就不去掉
        int index = tmp.size()-1;
        while(tmp[index] == 0 && index > 0)
        {
            index--;
        }
        
        for(int i = index; i >= 0; i--)
        {
            result += tmp[i]+'0';
        }
        
        return result;
    }
};