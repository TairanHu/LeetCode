class Solution {
public:
    int myAtoi(string str) {
        
        int num = 0;
        int i = 0;
        bool positive_flag = 1;
        
        while(str[i] == ' ')
        {
            i++;
            //cout << str[i];
        }
        
        if(str[i] == '+')
        {
            i++;
        }
        else if(str[i] == '-')
        {
            positive_flag = 0;
            i++;
        }
        //cout << str[i];
        
        for(; i < str.size(); i++)
        {
            
            if(!isdigit(str[i]))
            {
                break;
                //return 0;
            }
            
            if(num > 214748364)
            {
                if(positive_flag)
                {
                    num = 2147483647;
                }
                else
                {
                    num = 2147483648;
                }
                break;
            }
            
            if(num == 214748364 && str[i] - '0' > 7)
            {
                if(positive_flag)
                {
                    num = 2147483647;
                }
                else
                {
                    num = 2147483648;
                }
                break;
            }
            
            num = num*10;
            num += str[i] - '0';
        }
        if(positive_flag)
        {
            return num;
        }
        else
        {
            return -num;
        }
        
        
    }
};