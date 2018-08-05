class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        sort(people.begin(), people.end());

        int res = 0;
        int l = 0;
        int r = people.size()-1;

        while(l <= r)
        {
            if(people[l]+people[r] > limit)
            {
                r--;
            }
            else
            {
                r--;
                l++;
            }
            res++;
        }

        return res;

    }
};
