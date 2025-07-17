/*Problem statement
You are given an array/list ARR consisting of N integers. Your task is to find all the distinct triplets present in the array which adds up to a given number K.

An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'.

Note:
1. You can return the list of values in any order. For example, if a valid triplet is {1, 2, -3}, then {2, -3, 1}, {-3, 2, 1} etc is also valid triplet. Also, the ordering of different triplets can be random i.e if there are more than one valid triplets, you can return them in any order.
2. The elements in the array need not be distinct.
3. If no such triplet is present in the array, then return an empty list, and the output printed for such a test case will be "-1".*/
#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	//int n=arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int>>ans;
	for(int i=0;i<n;i++){
		if(i>0 && arr[i]==arr[i-1]) continue;
		int j=i+1,k=n-1;
		while(j<k){
			int s=arr[i]+arr[j]+arr[k];
			if(s<K) j++;
			else if(s>K) k--;
			else {
				vector<int>temp={arr[i],arr[j],arr[k]};
				ans.push_back(temp);j++;k--;
				while(j<k && arr[j]==arr[j-1]) j++;
				while(j<k && arr[k]==arr[k+1]) k--;
			}
		}
	}/*if(ans.size()==0) return {{-1}};
	else*/
	return ans;


}
