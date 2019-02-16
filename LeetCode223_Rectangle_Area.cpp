class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int area1 = (C-A)*(D-B);
        int area2 = (G-E)*(H-F);
        
        int left = max(A, E);
        int right = max(min(C, G), left);
        int down = max(B, F);
        int up = max(min(D, H), down);
        
        return area1 - (right-left)*(up-down) + area2;
        
    }
};