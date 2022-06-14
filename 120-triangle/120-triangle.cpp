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
        vector<int>temp1=triangle[triangle.size()-1];
       for(int i=triangle.size()-2;i>=0;i--)
       {
           vector<int>temp2(triangle[i].size());
           for(int j=0;j<triangle[i].size();j++)
           {
               temp2[j]=triangle[i][j]+min(temp1[j],temp1[j+1]);
           }   
           temp1=temp2;
       }
       return temp1[0];
    }
};