class MagicDictionary {
public:
    /** Initialize your data structure here. */
    MagicDictionary() {
        
    }
    
    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) {
        for(int i = 0; i < dict.size(); i++)
        {
            dic[dict[i]] = 1;
        }
    }
    
    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word) {
        
        if(word.size() == 0)
            return false;
        
        map<string, int>::iterator iter;
        //iter = dic.find(word);
        
        //if(iter != dic.end())
        //    return false;
        
        for(int i = 0; i < word.size(); i++)
        {
            for(int j = 0; j < 26; j++)
            {
                string str_tmp = word;
                str_tmp[i] = 'a'+j;
                
                if(str_tmp == word)
                    continue;
                
                iter = dic.find(str_tmp);
                if(iter != dic.end())
                {
                    return true;
                }
                
            }
        }
        
        return false;
        
    }
    
private:
    map<string, int> dic;
    
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary obj = new MagicDictionary();
 * obj.buildDict(dict);
 * bool param_2 = obj.search(word);
 */