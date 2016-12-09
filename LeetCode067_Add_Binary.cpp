class Solution {
public:
    string addBinary(string a, string b) {
        
        string result;
        int count_a = a.size();
        int count_b = b.size();
        int i, j;
        bool carry_flag = 0;
        for(i = count_a-1, j = count_b-1; i >= 0 && j >= 0; i--, j--)
        {
            if(a[i] != b[j])
            {
                if(carry_flag)
                {
                    carry_flag = 1;
                    result.push_back('0');
                }
                else
                {
                    carry_flag = 0;
                    result.push_back('1'); 
                }
            }
            else if(a[i] == '1')
            {
                if(carry_flag)
                {
                    result.push_back('1');
                }
                else
                {
                    result.push_back('0');
                }
                carry_flag = 1;
            }
            else
            {
                if(carry_flag)
                {
                    result.push_back('1');
                }
                else
                {
                    result.push_back('0');
                }
                carry_flag = 0;
            }
        }
        
        if(count_a > count_b)
        {
            for(int m = count_a-count_b-1; m >= 0; m--)
            {
                if(carry_flag)
                {
                    if(a[m] == '1')
                    {
                        result.push_back('0');
                    }
                    else
                    {
                        carry_flag = 0;
                        result.push_back('1');
                    }
                }
                else
                {
                    result.push_back(a[m]);
                }
            }
        }
        else
        {
            for(int m = count_b-count_a-1; m >= 0; m--)
            {
                if(carry_flag)
                {
                    if(b[m] == '1')
                    {
                        result.push_back('0');
                    }
                    else
                    {
                        carry_flag = 0;
                        result.push_back('1');
                    }
                }
                else
                {
                    result.push_back(b[m]);
                }
            }
        }
        
        if(carry_flag)
        {
            result.push_back('1');
        }
        
        reverse(result.begin(), result.end());
        return result;
        
    }
};