/*You are given a square matrix of non-negative integers 'MATRIX'. Your task is to rotate that array by 90 degrees in an anti-clockwise
direction using constant extra space.

For example:

For given 2D array :

    [    [ 1,  2,  3 ],
         [ 4,  5,  6 ],
         [ 7,  8,  9 ]  ]

After 90 degree rotation in anti clockwise direction, it will become:

    [   [ 3,  6,  9 ],
        [ 2,  5,  8 ],
        [ 1,  4,  7 ]   ]*/
#include <bits/stdc++.h> 
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
{int n=matrix.size(),m=matrix[0].size();
for(int i=0;i<n;i++){
    reverse(matrix[i].begin(),matrix[i].end());
}
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
       swap(matrix[i][j],matrix[j][i]);
    }
}
return matrix;
}
