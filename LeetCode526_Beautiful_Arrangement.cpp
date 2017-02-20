class Solution {
public:
    int countArrangement(int N) {
        
        int result = 0;
        vector<int> ch(N+1, 0);
        
        get_result(ch, result, 1, N);
        
        return result;
        
    }
    
    void get_result(vector<int>& ch, int& result, int i, int N)
    {
        if(i == N+1)
        {
            result++;
            return;
        }
        int j;
        
        for(j = 1; j <= N; j++)
        {
            if(ch[j] == 0)
            {
                if(j%i == 0 || i%j == 0)
                {
                    ch[j] = 1;
                    get_result(ch, result, i+1, N);
                    ch[j] = 0;
                }
            }
        }
        
    }
    
};