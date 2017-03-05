class Solution {
public
    int findBlackPixel(vectorvectorchar& picture, int N) {
        
        vectorvectorint pic;
        vectorint tmp;
        int count = 0;
        
        for(int i = 0; i  picture.size(); i++)
        {
            for(int j = 0; j  picture[0].size(); j++)
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
        
        for(int j = 0; j  picture[0].size(); j++)
        {
            vectorint pos;
            int pos = 0;
            for(int i = 0; i  picture.size(); i++)
            {
                tmp.push_back(pic[i][j]);
                if(pic[i][j] == 1)
                {
                    pos.push_back(i);
                }
            }
            
            if(accumulate(tmp.begin(), tmp.end(), 0) == N)
            {
                int size = 0;
                
                for(int i = 1; i  pos.size(); i++)
                {
                    if(accumulate(pic[pos[i]].begin(), pic[pos[i]].end(), 0) != N)
                    {
                        break;
                    }
                    
                    int k;
                    for(k = 0; k  pic[0].size(); k++)
                    {
                        if(pic[pos[i]] != pic[pos[0]])
                        {
                            break;
                        }
                    }
                    
                    if(k != pic[0].size())
                    {
                        break;
                    }
                    
                    size++;

                }
                
                if(accumulate(pic[pos[0]].begin(), pic[pos[0]].end(), 0) == N)
                {
                    if(size == N-1)
                    {
                        count += N;
                    }
                }
            }
            
            tmp.clear();
            
        }
        
        return count;
        
        
    }
};