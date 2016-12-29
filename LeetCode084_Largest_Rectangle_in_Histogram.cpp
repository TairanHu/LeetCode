class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        vector<int> tmp = heights;
        tmp.push_back(0);	//������һ��Ԫ����֮ǰ��ȣ���û�н���elseֱ�ӽ���������  [1,1]
        int max_area = 0;
        
        
        for(int i = 0; i < tmp.size(); )
        {
            if(s.empty() || tmp[s.top()] <= tmp[i])
            {
                s.push(i++);
            }
            else
            {
                int t = s.top();
                s.pop();
                max_area = max(max_area, tmp[t] * (s.empty() ? i : i - s.top() - 1));
                //cout << t << " " << max_area << endl;
            }
        }
        return max_area;
        
    }
};