Merge two sorted arrays without extra space
Given an array ‘A’ consisting of ‘N’ integers and an integer ‘B’, find the number of subarrays of array ‘A’ whose bitwise XOR( ⊕ ) of all elements is equal to ‘B’.



A subarray of an array is obtained by removing some(zero or more) elements from the front and back of the array.



Example:
Input: ‘N’ = 4 ‘B’ = 2
‘A’ = [1, 2, 3, 2]


#include<vector>
#include<bits/stdc++.h>
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){

int n=a.size(),m=b.size();
int i=n-1,j=0;
while(i>=0 && j<m)
	{
		if(a[i]>b[j]){
			swap(a[i],b[j]);
			j++;
			i--;
		}else break;
	}sort(a.begin(),a.end());
	sort(b.begin(),b.end());
}
