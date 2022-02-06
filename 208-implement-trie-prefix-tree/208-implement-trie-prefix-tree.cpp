class Trie {
        bool is_End;
        Trie* children[26];
public:
    Trie() {
        this->is_End=0;
        for(int i=0;i<26;i++)
        {
            this->children[i]=NULL;
        }
    }
    
    void insert(string word) {
        Trie* node=this;
        for(int i=0;i<word.size();i++)
        {
            int idx=word[i]-'a';
            if(node->children[idx]==NULL)
                node->children[idx]=new Trie();
            node=node->children[idx];
        }
        node->is_End=true;
    }
    
    bool search(string word) {
        if(this==nullptr)
            return false;
        Trie* root=this;
        for(int i=0;i<word.size();i++)
        {
            int index=word[i]-'a';
            root=root->children[index];
            if(root==NULL)
                return false;
        }
        return root->is_End;
    }
    
    bool startsWith(string prefix) {
        if(this==NULL)
            return false;
        Trie* root=this;
        for(int i=0;i<prefix.size();i++)
        {
            int index=prefix[i]-'a';
            root=root->children[index];
            if(root==nullptr)
                return false;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */