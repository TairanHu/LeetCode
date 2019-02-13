class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        int res = 0;
        vector<int> bits;
        for(int i = 0; i < words.size(); i++)
        {
            int tmp = 0;
            for(int j = 0; j < words[i].size(); j++)
            {
                tmp |= 1 << words[i][j] - 'a';
            }
            bits.push_back(tmp);
        }
        
        for(int i = 0; i < words.size(); i++)
        {
            for(int j = i+1; j < words.size(); j++)
            {
                if(bits[i]&bits[j])
                    continue;
                
                int t = words[i].size()*words[j].size();
                res = res > t ? res : t;
            }
        }
        
        return res;
    }
};