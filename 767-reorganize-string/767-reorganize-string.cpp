class Solution {
public:
    string reorganizeString(string s) {
        int size=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<size;i++)
        {
           mp[s[i]]++;
                
        }
        priority_queue<pair<int,char>>pq;
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
        }
        string ans="";
        while(pq.size()>1)
        {
            auto temp=pq.top();
            pq.pop();
            auto temp1=pq.top();
            pq.pop();
            ans+=temp.second;
            ans+=temp1.second;
            temp.first-=1;
            temp1.first-=1;
            if(temp.first>0)
                pq.push(temp);
            if(temp1.first>0)
                pq.push(temp1);
        }
        if(!pq.empty())
        {
            if(pq.top().first>1)
                return "";
            else
                ans+=pq.top().second;
        }
        return ans;
    }
};