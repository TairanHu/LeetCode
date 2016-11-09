class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int a = -2;
        int b = 0;
        int low = 0;
        int high = nums.size()-1;
        vector<int> result;

        int mid;

        if(nums.size() == 1)
        {
            if(nums[0] == target)
            {
                a = -1;
                b = 1;
            }
        }
        else
        {
            while(low < high)
            {
                mid = (low+high)/2;
                if(nums[mid] > target)
                {
                    high = mid;
                }
                else if(nums[mid] < target)
                {
                    //判断low和high是否相邻，没找到或者最大值等于target
                    if(low == mid)
                    {
                        if(nums[high] == target)
                        {
                            a = nums.size()-2;
                            b = nums.size();
                        }
                        else
                        {
                            a = -2;
                            b = 0;
                        }
                        break;
                    }
                    low = mid;
                }
                else
                {
                    a = mid;
                    b = mid;
                    while(a >= 0 && nums[--a] == target);
                    //result.push_back(a+1);

                    while(b <nums.size() && nums[++b] == target);
                    //result.push_back(b-1);

                    break;
                }
            }
        }
        result.push_back(a+1);
        result.push_back(b-1);
        return result;

        //search(nums, target, 0, nums.size()-1);

    }
