//����β�˿�ʼ��ǰѰ���������ڵ�Ԫ�أ���������i < ii�����һ��Ԫ��Ϊi���ڶ���Ԫ��Ϊii��
//���û���ҵ�������һ��Ԫ���򣬱�����ǰ�����������ģ�û����һ���������
//����ҵ����ٴ�ĩβ��ʼ�ҳ���һ������i��Ԫ�أ���Ϊj                              
//����Ԫ��i, j���ٽ�ii���������Ԫ�صߵ�����(����ii)
//���ĳ������û�б��������һ�����У����������ǵݼ�����ģ�����������������ǻ��ԭ���з�ת�����õ���С������


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
                    j--;//��β���ҵ���һ����num[i]�������һ�������ҵ�
                }
                swap(nums[i], nums[j]);
                reverse(nums.begin()+ii, nums.end());
                return;
            }
        }
        reverse(nums.begin(), nums.end());
    }
};