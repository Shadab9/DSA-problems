class Solution {
public:
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        int n=intervals.size();
        int i=1,j=0,ans=0;
        sort(intervals.begin(),intervals.end());
        int c=0;
        int first=intervals[0][0];
        int second=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(second>intervals[i][0])
            {
                first=intervals[i][0];
                second=min(second,intervals[i][1]);
                c++;
            }
            else
            {
                first=intervals[i][0];
                second=intervals[i][1];
            }
        }
        return c;
    }
};