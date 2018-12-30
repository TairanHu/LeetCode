class Solution {
public:
    vector<int> numsSameConsecDiff(int N, int K) {
        
        vector<int> res;
        int num;
        
        if(N == 1)
        {
            res.push_back(0);
            res.push_back(1);
            res.push_back(2);
            res.push_back(3);
            res.push_back(4);
            res.push_back(5);
            res.push_back(6);
            res.push_back(7);
            res.push_back(8);
            res.push_back(9);
            return res;
        }
        
        if(K == 0)
        {
            for(int i = 1; i < 10; i++)
            {
                num = 0;
                for(int j = 0; j < N; j++)
                {
                    num  = num*10 + i;
                }
                res.push_back(num);
            }
            return res;
        }
        
        for(int i = 1; i < 10; i++)
        {
            num = i;
            get_res(res, i, N-1, K, num);
                        
        }
        
        return res;
        
    }
    
    void get_res(vector<int>& res, int i, int N, int K, int num)
    {
        if(N == 0)
        {
            res.push_back(num);
            return;
        }
        
        for(int j = 0; j < 10; j++)
        {
            int tmp = num;
            if(j-i == K)
            {
                tmp = tmp*10 + j;
                get_res(res, j, N-1, K, tmp);
            }

            if(i-j == K)
            {
                tmp = tmp*10 + j;
                get_res(res, j, N-1, K, tmp);
            }            
        }
    }
    
};