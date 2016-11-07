class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string tmp;
        
        
        get_result(result, tmp, n, 0, 0);
        
        return result;
    }
    
    void get_result(vector<string> &result, string tmp, int n, int flag_l, int flag_r)
    {
        //cout << flag_l << " " << flag_r << endl;
        if(flag_r == n)
        {
            result.push_back(tmp);
        }
        else if(flag_l == n)
        {
            tmp += ')';
            get_result(result, tmp, n, flag_l, flag_r+1);
        }
        else
        {
            if(flag_l > flag_r)
            {
                //tmp += ')';
                get_result(result, tmp+')', n, flag_l, flag_r+1);
            }
            //tmp += '(';
            get_result(result, tmp+'(', n, flag_l+1, flag_r);
            
        }
        
        
    }
    
    
};