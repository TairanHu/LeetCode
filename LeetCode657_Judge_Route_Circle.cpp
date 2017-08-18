class Solution {
public:
    bool judgeCircle(string moves) {
        
        int x = 0;
        int y = 0;
        
        for(int i = 0; i < moves.size(); i++)
        {
            switch (moves[i])
            {
                case 'L':
                    x -= 1;
                    break;
                case 'R':
                    x += 1;
                    break;
                case 'U':
                    y += 1;
                    break;
                case 'D':
                    y -= 1;
                    break;
            }
        }
        
        if(x == 0 && y == 0)
            return true;
        
        return false;        
    }
};