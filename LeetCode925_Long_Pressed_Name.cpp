class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        
        if(name.size() == 0)
            return true;
        
        if(typed.size() == 0)
            return false;
        
        int i = 0;
        int j = 0;
        
        while(i < name.size() && j < typed.size())
        {
            if(name[i] == typed[j])
            {
                i++;
                j++;
            }
            else 
            {
                j++;
            }
        }
        
        if(i < name.size())
            return false;
        
        if(j < typed.size() && typed[j] != typed[j-1])
            return false;
        
        return true;
        
        
    }
};