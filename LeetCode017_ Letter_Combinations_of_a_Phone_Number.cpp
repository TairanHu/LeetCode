class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> result;
        string tmp ;
        
        //判断输入是否为空，本程序在输入为空是会出错，特此判断
        if(digits.size() == 0)
        {
            return result;
        }
        
        vector<string> letter;
        letter.push_back("abc");
        letter.push_back("def");
        letter.push_back("ghi");
        letter.push_back("jkl");
        letter.push_back("mno");
        letter.push_back("pqrs");
        letter.push_back("tuv");
        letter.push_back("wxyz");
        
        int pos = 0;
        
        get_result(digits, result, letter, tmp, pos);
        return result;
        
    }
    
    void get_result(string digits, vector<string>& result, vector<string> letter, string tmp, int pos)
    {
        
        if(pos == digits.size())
        {
            result.push_back(tmp);
            return;
        }
        
        int index = digits[pos]-'2';
        //cout << i << " " <<digits.size() << endl;
        for(int i = 0; i < letter[index].size(); i++)
        {
            tmp.push_back(letter[index][i]);
            get_result(digits, result, letter, tmp, pos+1);
            tmp.pop_back();
            
            
        }
        //return result;
    }
    
};