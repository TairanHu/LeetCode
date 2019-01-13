class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        map<long, vector<int>>tmp;
        vector<vector<int>> res;
        for(int i = 0; i < points.size(); i++)
        {
            long dis = points[i][0]*points[i][0] + points[i][1]*points[i][1];
            tmp[dis] = points[i];
        }
        
        map<long, vector<int>>::iterator iter = tmp.begin();
        for(int i = 0; i < K; i++)
        {
            res.push_back(iter->second);
            iter++;
        }
        
        return res;
    }
};