class Solution {
public:
    vector<string> restoreIpAddresses(string s) {

        string tmp;
        get_res(tmp, 0, 0, s);
        
        return res;        
    }
    
    void get_res(string tmp, int pos, int cur, string s)
    {   
        if(pos == 4)
        {
            if(cur == s.size())
                res.push_back(tmp);
            return;
        }
        
        for(int i = 1; i <= 3 && i+cur<=s.size(); i++)
        {
            string t = s.substr(cur, i);
            
            int num = atoi(t.c_str());
            
            if(i == 2)
            {
                if(num/10 == 0)
                    return;
            }
            else if(i == 3)
            {
                if(num/100 == 0)
                    return;
            }
            
            if(num < 256)
            {
                if(pos == 0)
                {
                    get_res(t, pos+1, i+cur, s);
                }
                else
                {
                    get_res(tmp+'.'+t, pos+1, i+cur, s);
                }
                
            }
        }     
    }
    
private:
    vector<string> res;
    
};