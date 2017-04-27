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


class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *r = root;
        if(r == NULL)
        {
            return ;
        }
        
        for(int i = 0; i < word.size(); i++)
        {
            if(r == NULL)
            {
                return;
            }
            
            if(r->child[word[i] - 'a'] == NULL)
            {
                r->child[word[i] - 'a'] = new TrieNode();
            }
            r = r->child[word[i] - 'a'];
        }
        r->isWord = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode *r = root;
        if(r == NULL)
        {
            return false;
        }
        
        for(int i = 0; i < word.size(); i++)
        {
            if(r->child[word[i] - 'a'] == NULL)
            {
                return false;
            }
            r = r->child[word[i] - 'a'];
        }
        return r->isWord;
        
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *r = root;
        if(r == NULL)
        {
            return false;
        }
        
        for(int i = 0; i < prefix.size(); i++)
        {
            if(r->child[prefix[i] - 'a'] == NULL)
            {
                return false;
            }
            r = r->child[prefix[i] - 'a'];
        }
        return (r != NULL);
    }
    
private:
    TrieNode* root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */