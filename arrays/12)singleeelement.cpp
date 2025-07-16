/*You are given a sorted array 'arr' of positive integers of size 'n'.



It contains each number exactly twice except for one number, which occurs exactly once.



Find the number that occurs exactly once.



Example :
Input: ‘arr’ = {1, 1, 2, 3, 3, 4, 4}.*/
#include<vector>

int getSingleElement(vector<int> &arr){
	int xorr=0;
	int n=arr.size();
	for(int i=0;i<n;i++) xorr^=arr[i];
	return xorr;	
}
