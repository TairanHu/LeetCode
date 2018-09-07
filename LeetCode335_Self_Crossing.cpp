class Solution {
public:
    bool isSelfCrossing(vector<int>& x) {
        
        if(x.size() <= 3)
            return false;
        
        if(x.size() == 4)
        {
            if(x[2] > x[0])
            return false;
        
            if(x[3] < x[1])
                return false;
            
            return true;
        }    
        
        
        bool flag = 0;  //内绕为0，外绕为1；
        
        if(x[2] - x[0] > 0 && x[3] - x[1] > 0)
            flag = 1;
        
        if(flag == 0)
        {
            if(x[3] == x[1])
            {
                if(x[4] + x[0] >= x[2])
                    return true;
            }
            
            for(int i = 4; i < x.size(); i++)
            {
                if(x[i] >= x[i-2])
                    return true;
            }
            
            return false;
        }
        
        
        int i;
        for(i = 4; i < x.size(); i++)
        {
            if(x[i] <= x[i-2])
            {
                flag = 0;
                
                if(x[i] + x[i-4] > x[i-2])
                    x[i-1] = x[i-1] - x[i-3]; 
                else if(x[i] + x[i-4] < x[i-2])
                    x[i-2] = x[i-2] - x[i-4];
                else
                {
                    x[i-2] = x[i-2] - x[i-4];
                    x[i-1] = x[i-1] - x[i-3];
                }
                
                break;
            }
        }
        
        if(i == x.size())
            return false;
        
        for(i++; i < x.size(); i++)
        {
            if(x[i] >= x[i-2])
                return true;
        }
        
        return false;
        
    }
};