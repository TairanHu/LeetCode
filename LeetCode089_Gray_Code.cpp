/**************************************************************************
n+1位格雷码中的前2^n个码字等于n位格雷码的码字，按顺序书写，加前缀0
n+1位格雷码中的后2^n个码字等于n位格雷码的码字，按逆序书写，加前缀1
n+1位格雷码的集合 = n位格雷码集合(顺序)加前缀0 + n位格雷码集合(逆序)加前缀1
***************************************************************************/

class Solution {
public:
    vector<int> grayCode(int n) {
        
        vector<int> result;
        result.push_back(0);
        
        for(int index = 1; index <= n; index++)
        {
            int tmp = pow(2, index-1);
            int last = tmp;
            
            while(tmp--)
            {
                result.push_back(result[tmp]+last);
            }
        }
        
        return result;
        
    }
};