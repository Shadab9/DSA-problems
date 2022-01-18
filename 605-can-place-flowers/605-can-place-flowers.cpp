class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0;
        if(n==0)
            return true;
        if(flowerbed.size()==1 && flowerbed[0]==0){
            return true;
        }
        if(flowerbed.size()==1 && flowerbed[0]==1){
            return false;
        }
        
        
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=1;
            n--;
        }
        for(int i=1;i<flowerbed.size()-1;i++)
        {
            if(flowerbed[i-1]==0 and printf("%d",1) and flowerbed[i+1]==0 and flowerbed[i]!=1)
            {
                flowerbed[i]=1;
                c++;
                cout<<i<<endl;
            }
            
        }
        int x=flowerbed.size();
        if(flowerbed[x-1]==0 and flowerbed[x-2]==0)
            c++;
        return c>=n?true:false;
    }
};