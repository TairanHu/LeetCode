class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        
        int res = INT_MAX;
        
        vector<int> time;
        
        for(int i = 0; i < timePoints.size(); i++)
        {
            int tmp_time = ((timePoints[i][0]-'0')*10 + (timePoints[i][1]-'0'))*60 + ((timePoints[i][3]-'0')*10 + (timePoints[i][4]-'0'));
            time.push_back(tmp_time);
        }
        
        sort(time.begin(), time.end());
        
        
        for(int i = 0; i < time.size()-1; i++)
        {
            res = res > time[i+1]-time[i] ? time[i+1]-time[i] : res;
        }
        
        res = res > time[0]+24*60-time[time.size()-1] ? time[0]+24*60-time[time.size()-1] : res;
        
        return res;
        
        
    }
};