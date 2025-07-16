/*You have been given an array/list 'ARR' consisting of 'N' integers. Your task is to find the
majority element in the array. If there is no majority element present, print -1.

Note:
A majority element is an element that occurs more than floor('N' / 2) times in the array.*/
#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int el=-1,c=0;
	
	for(int i=0;i<n;i++){
		if(c==0) el=arr[i];
		if(el==arr[i]){
			c++;
		}else c--;
	}
	if(el==-1) return -1;
	c=0;
	for(int i=0;i<n;i++){
		if(el==arr[i]) c++;
	}if(c>=n/2+1) return el;
	return -1;
}
