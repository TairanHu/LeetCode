//从最尾端开始往前寻找两个相邻的元素，两者满足i < ii（令第一个元素为i，第二个元素为ii）
//如果没有找到这样的一对元素则，表明当前的排列是最大的，没有下一个大的排列
//如果找到，再从末尾开始找出第一个大于i的元素，记为j                              
//交换元素i, j，再将ii后面的所有元素颠倒排列(包括ii)
//如果某个排列没有比他大的下一个排列（即该排列是递减有序的），调用这个函数还是会把原排列翻转，即得到最小的排列


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
        {
            return;
        }
        
        for(int i = n-2, ii = n-1; i >= 0; i--,ii--)
        {
            if(nums[i] < nums[ii])
            {
                int j = n-1;
                while(nums[j] <= nums[i])
                {
                    j--;//从尾部找到第一个比num[i]大的数，一定可以找到
                }
                swap(nums[i], nums[j]);
                reverse(nums.begin()+ii, nums.end());
                return;
            }
        }
        reverse(nums.begin(), nums.end());
    }
};