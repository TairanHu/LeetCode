class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int x = 0;
        int y = 0;
        
        int left = 0;
        int right = n;
        int up = 0;
        int down = n;
        
        int count = 1;
        
        vector<int> tmp(n, 0);
        vector<vector<int>> res(n, tmp);
        
        while(1)
        {
            for(int i = left; i < right; i++)
            {
                res[x][y++] = count++; 
            }
            up++; x++; y--;
            
            if(up == down)
                break;
            
            for(int i = up; i < down; i++)
            {
                res[x++][y] = count++;
            }
            right--; x--; y--;
            
            for(int i = right-1; i >= left; i--)
            {
                res[x][y--] = count++;
            }
            down--; x--; y++;
            
            if(up == down)
                break;
            
            for(int i = down-1; i >= up; i--)
            {
                res[x--][y] = count++;
            }
            left++; x++; y++;
            
        }
        
        return res;
        
    }
};