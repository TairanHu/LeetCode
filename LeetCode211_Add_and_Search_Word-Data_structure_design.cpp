class TrieNode {
public:
    // Initialize your data structure here.
    bool isWord;
        
    TrieNode * child[26];
    
    TrieNode():isWord{false}
    {
        memset(child,NULL,sizeof(child));
    }
};

class WordDictionary {
public:
    /** Initialize your data structure here. */
    WordDictionary() {
        root = new TrieNode();
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        TrieNode *r = root;
        if(r == NULL)
        {
            return;
        }
        
        for(int i = 0; i < word.size(); i++)
        {
            if(r == NULL)
            {
                return;
            }
            
            if(r->child[word[i]-'a'] == NULL)
            {
                r->child[word[i]-'a'] = new TrieNode();
            }
            r = r->child[word[i]-'a'];
        }
        r->isWord = true;
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        
        return search(word, word.size(), 0, root);
    }
    
    bool search(string &word, int n, int pos, TrieNode *r) 
    {
        if (r == NULL)
        {
            return false;
        }
        if (pos == n)
        {
            return r->isWord;
        }

        if (word[pos] == '.')
        {
            for (int i = 0; i < 26; i++)
            {
                if (r->child[i])
                {
                    if (search(word, n, pos+1, r->child[i]))
                    {
                        return true;
                    }
                }
            }
        }
        else
        {
            if (r->child[word[pos]-'a'])
            {
                return search(word, n, pos+1, r->child[word[pos]-'a']);
            }
        }
        return false;
    }
    
private:
    TrieNode* root;
    
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * bool param_2 = obj.search(word);
 */