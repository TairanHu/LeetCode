class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int res = 0;
        vector<int> heap;
        long count = 0;
        
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                count++;
                if(count < k)
                {
                    heap.push_back(matrix[i][j]);
                }
                else if(count == k)
                {
                    heap.push_back(matrix[i][j]);
                    make_heap(heap.begin(), heap.end());
                }
                else
                {
                    res = heap.front();
                    if(matrix[i][j] < res)
                    {
                        pop_heap(heap.begin(), heap.end());
                        heap.pop_back();    //ɾ��β��
            
                        heap.push_back(matrix[i][j]);  //���������м���,�ٽ���
                        push_heap(heap.begin(), heap.end());
                    }
                }
            }
        }
        
        return heap.front();       
        
    }
};





class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        int n = matrix.size();
		int L = matrix[0][0];
		int R = matrix[n - 1][n - 1];
		
		while (L < R) 
		{
			int mid = L + ((R - L) >> 1);
			int temp = 0;
			for (int i = 0; i < n; i++)
			{
			    temp += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
			}
			
			if (temp < k) 
			{
			    L = mid + 1;
			}
			else 
			{
			    R = mid;
			}
		}
		
		return L;
    }
};