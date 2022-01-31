class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int size=time.size();
        unordered_map<int,int>timeFreq;
        int count=0;
        for(int i=0;i<size;i++)
        {
            if(timeFreq[(60-(time[i]%60))%60])
                count+=timeFreq[(60-(time[i]%60))%60];    
         
                timeFreq[time[i]%60]++;
        }
        return count;
    }
};