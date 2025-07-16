++/*Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.



Example:
'arr '= [1,2,3,4,5]
'k' = 1  rotated array = [2,3,4,5,1]
'k' = 2  rotated array = [3,4,5,1,2]
'k' = 3  rotated array = [4,5,1,2,3] and so on.*/
vector<int> rotateArray(vector<int>arr, int k) {
   reverse(arr.begin(),arr.begin()+k);
   reverse(arr.begin()+k,arr.end());
   reverse(arr.begin(),arr.end());
   return arr;
}

right rotate
#include<bits/stdc++.h>
using namespace std;
vector<int>rightrotate(vector<int >arr,int k){
  
   int n=arr.size();
   k=k%n; reverse(arr.begin(),arr.end());
   reverse(arr.begin(),arr.begin()+k);
   reverse(arr.begin()+k,arr.end());
  
   return arr;
}
