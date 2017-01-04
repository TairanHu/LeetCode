/**************************************************************************
n+1λ�������е�ǰ2^n�����ֵ���nλ����������֣���˳����д����ǰ׺0
n+1λ�������еĺ�2^n�����ֵ���nλ����������֣���������д����ǰ׺1
n+1λ������ļ��� = nλ�����뼯��(˳��)��ǰ׺0 + nλ�����뼯��(����)��ǰ׺1
***************************************************************************/

class Solution {
public:
    vector<int> grayCode(int n) {
        
        vector<int> result;
        result.push_back(0);
        
        for(int index = 1; index <= n; index++)
        {
            int tmp = pow(2, index-1);
            int last = tmp;
            
            while(tmp--)
            {
                result.push_back(result[tmp]+last);
            }
        }
        
        return result;
        
    }
};