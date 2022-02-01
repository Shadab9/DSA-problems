class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int size=prices.size();
        int profit=0;
        for(int i=1;i<size;i++)
        {
            if(buy>prices[i])
                buy=prices[i];
            profit=max(profit,prices[i]-buy);
        }
        return profit;
    }
};