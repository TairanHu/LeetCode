class Solution {
public:
    int findLonelyPixel(vector<vector<char>>& picture) {
        
        vector<vector<int>> pic;
        vector<int> tmp;
        int count = 0;
        
        for(int i = 0; i < picture.size(); i++)
        {
            for(int j = 0; j < picture[0].size(); j++)
            {
                if(picture[i][j] == 'B')
                {
                    tmp.push_back(1);
                    continue;
                }
                tmp.push_back(0);
            }
            pic.push_back(tmp);
            tmp.clear();
        }
        
        for(int j = 0; j < picture[0].size(); j++)
        {
            int pos = 0;
            for(int i = 0; i < picture.size(); i++)
            {
                tmp.push_back(pic[i][j]);
                if(pic[i][j] == 1)
                {
                    pos = i;
                }
            }
            
            if(accumulate(tmp.begin(), tmp.end(), 0) == 1)
            {
                if(accumulate(pic[pos].begin(), pic[pos].end(), 0) == 1)
                {
                    count++;
                }
            }
            
            tmp.clear();
            
        }
        
        return count;
    }
};