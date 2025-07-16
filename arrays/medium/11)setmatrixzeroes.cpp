/*You are given an N x M integer matrix. Your task is to modify this matrix in place so that if any cell contains the value 0, then all cells in the same row and column as that cell should also be set to 0.

Requirements:

If a cell in the matrix has the value 0, set all other cells in that cell's row and column to 0.
You should perform this modification in place (without using additional matrices).
You must do it in place.

For Example:

If the given grid is this:
[7, 19, 3]
[4, 21, 0]

Then the modified grid will be:
[7, 19, 0]
[0, 0,  0]*/
#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int colo=0;
	int n=matrix.size();
	int m=matrix[0].size();
	for(int i=0;i<matrix.size();i++){
		for(int j=0;j<matrix[i].size();j++){
			if(matrix[i][j]==0){
				matrix[i][0]=0;
				if(j!=0) matrix[0][j]=0;
				else colo=1;
			}
		}
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(matrix[i][0]==0||matrix[0][j]==0){
				matrix[i][j]=0;
			}
		}
	}if(matrix[0][0]==0){
	for(int j=0;j<m;j++)matrix[0][j]=0;}
	if(colo) {
		for(int i=0;i<n;i++) matrix[i][0]=0;
	}
}
