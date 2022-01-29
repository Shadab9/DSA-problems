class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size()-1;i++)
        {
            if(intervals[i][1]>=intervals[i+1][0])
            {
                intervals[i+1][0]=min(intervals[i][0],intervals[i+1][0]);
                intervals[i+1][1]=max(intervals[i][1],intervals[i+1][1]);
                intervals[i][0]=-1;
            }
        }
        vector<vector<int>>result;
        for(auto it:intervals)
        {
            if(it[0]!=-1)
                result.push_back(it);
        }
        return result;
    }
};