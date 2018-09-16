class Solution {
public:
    int totalFruit(vector<int>& tree) {
        
        if(tree.size() <= 2 )
            return tree.size();
        
        vector<int> fruit;
        vector<int> pos;
        
        int count1 = 0;
        int count2 = 0;
        int res = 0;
        
        pos.push_back(0);
        fruit.push_back(tree[0]);
        
        int tmp = 0;
        for(int i = 0; i < tree.size(); i++)
        {
            if(tree[i] != tree[tmp])
            {
                fruit.push_back(tree[i]);
                pos.push_back(i);
                tmp = i;
            }                    
        }
        
        fruit.push_back(-1);
        pos.push_back(tree.size());
        
        int tmp1 = fruit[0];
        int tmp2 = fruit[1];
        int p = 0;
        for(int i = 2; i < fruit.size(); i++)
        {
            if(fruit[i] != tmp1 && fruit[i] != tmp2)
            {
                
                res = res > pos[i]-pos[p] ? res : pos[i]-pos[p];
                p = i-1;                               
            }
            tmp1 = tmp2;
            tmp2 = fruit[i];
        }
        
        if(fruit.size() <= 2)
        {
            return tree.size();
        }
        
        
        return res;
        
    }
};