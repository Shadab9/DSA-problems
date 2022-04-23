class Solution {
public:
    unordered_map<string,string>mp;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string ans="http://LC/"+to_string(mp.size());
        mp[ans]=longUrl;
        return ans;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));