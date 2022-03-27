class Solution {
public:
  
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    queue<pair<int,int>>q;
    q.push({x,y});
    int orgColor=image[x][y];
    image[x][y]=newColor;
    vector<int>dx={0,1,0,-1};
    vector<int>dy={1,0,-1,0};
    while(!q.empty())
    {
        auto temp=q.front();
        q.pop();
        int old_X=temp.first;
        int old_Y=temp.second;
        
        for(int i=0;i<4;i++)
        {
            int new_X=dx[i]+old_X;
            int new_Y=dy[i]+old_Y;
            if(new_X>=0 and new_X<image.size() and new_Y>=0 and new_Y<image[0].size() and image[new_X][new_Y]==orgColor and image[new_X][new_Y]!=newColor)
            {
                image[new_X][new_Y]=newColor;
                q.push({new_X,new_Y});
            }
        }
    }
  
    return image;
}
  
};