class Solution {
public:
    int romanToInt(string s) {
        
        int res = 0;
        int i = 0;
        for(i = 0; i < s.size()-1; i++)
        {
            switch (s[i])
            {
                case 'I':
                    res += 1;
                    if(s[i+1] == 'V')
                    {
                        res += 3;
                        i++;
                    }
                    else if(s[i+1] == 'X')
                    {
                        res += 8;
                        i++;
                    }
                    break;
                
                case 'V':
                    res += 5;
                    break;
                
                case 'X':
                    res += 10;
                    if(s[i+1] == 'L')
                    {
                        res += 30;
                        i++;
                    }
                    else if(s[i+1] == 'C')
                    {
                        res += 80;
                        i++;
                    }
                    break;
                
                case 'L':
                    res += 50;
                    break;
                
                case 'C':
                    res += 100;
                    if(s[i+1] == 'D')
                    {
                        res += 300;
                        i++;
                    }
                    else if(s[i+1] == 'M')
                    {
                        res += 800;
                        i++;
                    }
                    break;
                
                case 'D':
                    res += 500;
                    break;
                
                case 'M':
                    res += 1000;
                    break;
            }
            
        }
        if(i == s.size()-1)
        {
            if(s[i] == 'I')
                res += 1;
            else if(s[i] == 'V')
                res += 5;
            else if(s[i] == 'X')
                res += 10;
            else if(s[i] == 'L')
                res += 50;
            else if(s[i] == 'C')
                res += 100;
            else if(s[i] == 'D')
                res += 500;
            else if(s[i] == 'M')
                res += 1000;
        }
        
        return res;
        
    }
};