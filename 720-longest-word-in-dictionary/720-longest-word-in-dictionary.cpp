class Solution {
public:
    class TrieNode
    {
        public:
        map<char,TrieNode*>edges;
        bool isEnd;
        TrieNode()
        {
            edges={};
            isEnd=false;
        }
    };
    TrieNode* root=new TrieNode();
    void insert(string word)
    {
        TrieNode* curr=root;
        int size=word.size();
        for(int i=0;i<size;i++)
        {
            if(curr->edges.find(word[i])==curr->edges.end())
                curr->edges[word[i]]=new TrieNode();
            curr=curr->edges[word[i]];
        }
        curr->isEnd=true;
            
    }
    string longestWord(vector<string>& words) {
        sort(words.begin(),words.end());
        
        string result="";
        for(string& s: words)
            insert(s);
        for(auto it:words)
        {
            TrieNode* curr=root;            
            bool isbreak=false;
            for(int i=0;i<it.size();i++)
            {
                if(!curr->edges[it[i]]->isEnd)
                {
                    isbreak=true;
                    break;
                }
                curr=curr->edges[it[i]];
            }
            if(!isbreak and it.size()>result.size())
                result=it;
        }
        return result;
    }
};