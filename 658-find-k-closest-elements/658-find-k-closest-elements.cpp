class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>result;
        
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<arr.size();i++)
        {
            pq.push({abs(arr[i]-x),arr[i]});
            if(pq.size()>k)
                pq.pop();
        }
        while(!pq.empty())
        {
            auto temp=pq.top().second;
            result.push_back(temp);
            pq.pop();
        }
        sort(result.begin(),result.end());
        return result;
    }
};