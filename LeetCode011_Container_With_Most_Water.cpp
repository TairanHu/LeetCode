class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int size = height.size();
        int max = 0;
        int water = 0;
        int i = 0;
        int j = size-1;
        while(i < j)
        {
            water = (j - i)*(min(height[i], height[j]));
            
            if(height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
            if(water > max)
            {
                max = water;
            }
            
        }
        
        return max;
    }
};