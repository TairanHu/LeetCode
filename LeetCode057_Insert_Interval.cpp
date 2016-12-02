/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:

    static bool cmp(const Interval& a, const Interval& b)
    {
        return a.start < b.start;
    }
    
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        intervals.push_back(newInterval);
        
        vector<Interval> result;
        struct Interval tmp;
        
        if(intervals.size() == 0)
        {
            return result;
        }
        
        sort(intervals.begin(), intervals.end(), cmp);
        result.push_back(intervals[0]);
        
        for(int i = 1; i < intervals.size(); i++)
        {
            if(intervals[i].start <= result.back().end)
            {
                tmp.start = result.back().start;
                tmp.end = max(intervals[i].end, result.back().end);
                result.pop_back();
                result.push_back(tmp);
            }
            else
            {
                result.push_back(intervals[i]);
            }
        }
        
        return result;
    }
};