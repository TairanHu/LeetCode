class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> res;
        int tmp = n;
        
        int t = 1;
        vector<int> tt;
        while(tmp)
        {
            tt.push_back(t);
            res.push_back(t);
            t = t*10;
            tmp /= 10;
        }
        
        t = res.back();
        while(t++ < n)
        {
            int tem = t;
            while(tem%10 == 0)
            {
                tem = tem/10;
            }
            
            while(tem != t)
            {
                res.push_back(tem);
                tem = tem*10;
            }
            res.push_back(t);
        }
        
        
        int back = tt.back()-1;
        tt.pop_back();
        t = res.back() / 10;
        
        while(t++ < back)
        {
            int tem = t;
            while(tem%10 == 0)
                tem = tem/10;
            
            while(tem != t)
            {
                res.push_back(tem);
                tem = tem*10;
            }
            res.push_back(t);
        }
              
        return res;
        
    }
};