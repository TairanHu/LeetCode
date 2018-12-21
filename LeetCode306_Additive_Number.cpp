class Solution {
public:
    bool isAdditiveNumber(string num) {
        
        if(num.size() < 3)
            return false;
        
        for(int i = 1; i < num.size()-1; i++)
        {
            string str_num1 = num.substr(0, i);
                
            for(int j = i+1; j < num.size(); j++)
            {
                string str_num2 = num.substr(i, j-i);
                string str_num3 = num.substr(j);
                
                if( get_res(str_num1, str_num2, str_num3) )
                {
                    return true;
                }
                
                if(num[i] == '0')
                    break;                             
            }
            
            if(num[0] == '0')
                return false;
        }
        
        return false;
    }
    
    bool get_res(string& str_num1, string& str_num2, string& str_num3)
    {
        if(str_num3.size() == 0)
            return true;

        int num1 = atoi(str_num1.c_str());
        int num2 = atoi(str_num2.c_str());
        
        for(int i = 1; i <= str_num3.size(); i++)
        {
            string tmp = str_num3.substr(0, i);
            string reset = str_num3.substr(i);
            int num3 = atoi(tmp.c_str());
            
            if(num3 == num1+num2)
            {
                if(get_res(str_num2, tmp, reset))
                    return true;
            }
            
            if(str_num3[0] == '0')
                return false;            
        }
        return false;        
    }    
};