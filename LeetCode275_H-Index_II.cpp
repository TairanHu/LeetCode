class Solution {
public:
    int hIndex(vector<int>& citations) {

        int l = 0;
        int r = citations.size();

        while(l < r)
        {
            int mid = l + (r-l)/2;
            if(citations.size()-mid == citations[mid])
                return citations.size()-mid;
            else if(citations.size()-mid < citations[mid])
                r = mid;
            else
                l = mid + 1;
        }

        return citations.size() - l;

    }
};
