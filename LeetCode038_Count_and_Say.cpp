class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        string tmp;
        int count = 1;
        
        for(int i = 1; i < n; i++)
        {
            count = 1;
            char c = result[0];
            tmp.clear();
            for(int j = 1; j < result.size(); j++)
            {
                if(c == result[j])
                {
                    count++;
                }
                else
                {
                    char t = count + '0';
                    tmp = tmp + t + c;
                    count = 1;
                    c = result[j];
                }
            }
            char t = count + '0';
            tmp = tmp + t + c;
            result = tmp;
            //cout << result << i << " ";
        }
        return result;
    }
};