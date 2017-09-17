class MapSum {
public:
    /** Initialize your data structure here. */
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        map_sum[key] = val;
    }
    
    int sum(string prefix) {
        int count = 0;
        map<string, int>::iterator it;
        for(it = map_sum.begin(); it != map_sum.end(); it++)
        {
            string tmp = it->first;
            if(tmp.size() < prefix.size())
                continue;
            string t = tmp.substr(0,prefix.size());
            if(t == prefix)
                count += it->second;
        }
        
        return count;
        
    }
    
private:
    map<string, int> map_sum;

};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum obj = new MapSum();
 * obj.insert(key,val);
 * int param_2 = obj.sum(prefix);
 */