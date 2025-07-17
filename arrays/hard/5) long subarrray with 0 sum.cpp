/*Problem statement
Ninja is given an array ‘Arr’ of size ‘N’. You have to help him find the longest subarray of ‘Arr’, whose sum is 0. You must return the length of the
longest subarray whose sum is 0.



For Example:
For N = 5, and Arr = {1, -1, 0, 0, 1}, 
We have the following subarrays with zero sums: 
{{1, -1}, {1, -1, 0}, {1, -1, 0, 0}, {-1, 0, 0, 1}, {0}, {0, 0}, {0}}
Among these subarrays, {1, -1, 0, 0} and {-1, 0, 0, 1} are the longest subarrays with their sum equal to zero. Hence the answer is 4.**/


#include<vector>
#include<bits/stdc++.h>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
int maxi=0,s=0;
map<int,int>mp;
for(int i=0;i<arr.size();i++){
	s+=arr[i];
	if(s==0){
		maxi=max(maxi,i+1);
	}else {
		if(mp.find(s)!=mp.end()){
			maxi=max(maxi,i-mp[s]);
		}else{
			mp[s]=i;
		}
	}
}return maxi;
}
