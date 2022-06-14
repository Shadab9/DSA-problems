class Solution {
public:
//    2
//   3 4
//  6 5 7
// 4 1 8 3
       

//    2
//   3 4
//  6 5 7
// 4 1 8 3   
       
//          11
//         9 9
//        7 6 11     
//       4 1 8 3
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
       vector<vector<int>>result;
       
       for(int i=triangle.size()-2;i>=0;i--)
       {
           //vector<int>it=triangle[i];
           for(int j=0;j<triangle[i].size();j++)
           {
               triangle[i][j]=triangle[i][j]+min(triangle[i+1][j],triangle[i+1][j+1]);
           }   
       }
       return triangle[0][0];
    }
};