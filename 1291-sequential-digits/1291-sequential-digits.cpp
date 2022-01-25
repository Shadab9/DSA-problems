class Solution {
public:
   
    vector<int> sequentialDigits(int low, int high) {
        vector<int>result;
        
        queue<int>q;
        for(int i=1;i<=9;i++)
            q.push(i);
        while(!q.empty())
        {
            int num=q.front();
            q.pop();
            int rem=num%10;
            int next=num*10+(rem+1);
            if(num>=low)
                result.push_back(num);
            if(rem!=9 and next<=high)
                q.push(next);
        }
        return result;
    }
};