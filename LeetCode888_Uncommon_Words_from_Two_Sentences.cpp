class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        
        map<string, int> result_string;
        vector<string> res;
        
        string tmp;
        
        stringstream input_A(A);
        stringstream input_B(B);
    
        while(input_A >> tmp)
        {
            result_string[tmp]++;
        }
        
        while(input_B >> tmp)
        {
            result_string[tmp]++;
        }
        
        map<string, int>::iterator iter; 
        for(iter = result_string.begin(); iter != result_string.end(); iter++)  
        {
            if(iter->second == 1)
                res.push_back(iter->first); 
        }
        
        return res;
        
    }
};