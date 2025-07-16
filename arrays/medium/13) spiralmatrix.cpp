/*You are given a 2-D array 'MATRIX' of dimensions N x M, of integers. You need to return the spiral path of the matrix.

Example Of Spiral Path:
2
4 4
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16
3 6
1 2 3 4 5 6 
7 8 9 10 11 12 
13 14 15 16 17 18
Sample Output 1 :
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
*/#include <bits/stdc++.h> 
vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
  vector<int>ans;
  int top=0,left=0,right=m-1,bottom=n-1;
  while(top<=bottom && left<=right){
      for(int i=left;i<=right;i++){
ans.push_back(matrix[top][i]);
      }top++;
      for(int i=top;i<=bottom;i++) ans.push_back(matrix[i][right]);
      right--;
      if(top<=bottom){
          for(int i=right;i>=left;i--) ans.push_back(matrix[bottom][i]);
          bottom--;
      }
      if(left<=right){
          for(int i=bottom;i>=top;i--) ans.push_back(matrix[i][left]);
          left++;
      }
  }return ans;
}
