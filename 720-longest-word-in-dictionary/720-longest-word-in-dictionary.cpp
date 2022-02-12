class Solution {
public:
    class TrieNode{
    public:
        map<char, TrieNode*> edges;
        bool isEnd;
        
        TrieNode(){
            edges = {};
            isEnd = false;
        }
    };
    TrieNode* root = new TrieNode();
    
    string longestWord(vector<string>& words) {
        sort(words.begin(), words.end());
        string result = "";
        for(string& s: words)
            insert(s);
        for(string& s: words){
            TrieNode* cur = root;
            bool isBreak = false;
            for(int i = 0; i < s.size(); i++){
                if(!cur -> edges[s[i]] -> isEnd){
                    isBreak = true;
                    break;
                }
                cur = cur -> edges[s[i]];
            }
            if(!isBreak && s.size() > result.size())
                result = s;
        }
        return result;
        
    }
    void insert(string& s){
        TrieNode* cur = root;
        for(char c: s){
            if(cur -> edges.find(c) == cur -> edges.end())
                cur -> edges[c] = new TrieNode();
            cur = cur -> edges[c];
        }
        cur -> isEnd = true;
    }
};