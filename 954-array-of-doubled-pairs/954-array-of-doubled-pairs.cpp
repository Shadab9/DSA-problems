class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        int size=arr.size();
        sort(arr.begin(),arr.end(),greater<int>());
        unordered_map<int,int>mp;
        for(int i=0;i<size;i++)
            mp[arr[i]]++;
        for(int i=0;i<size;i++)
        {
            if(mp.find(2*arr[i])!=mp.end() and mp[2*arr[i]]!=0 and mp[arr[i]]!=0)
            {
                mp[arr[i]]--;
                mp[2*arr[i]]--;
            }
        }
         for(auto it:mp){
            if(it.second != 0)
                return false;
        }
        return true;
        
        
    }
};