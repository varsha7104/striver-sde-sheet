/*Given an array ‘A’ consisting of ‘N’ integers and an integer ‘B’, find the number of subarrays of array ‘A’ whose bitwise XOR( ⊕ ) of all elements is equal to ‘B’.



A subarray of an array is obtained by removing some(zero or more) elements from the front and back of the array.



Example:
Input: ‘N’ = 4 ‘B’ = 2
‘A’ = [1, 2, 3, 2]

Output: 3*/

#include<bits/stdc++.h>
int subarraysWithSumK(vector < int > a, int b) {
int n=a.size();
int x=0;
int c=0;
map<int,int>mp;
mp[x]++;
for(int i=0;i<a.size();i++){
x^=a[i];
int xr=x^b;
c+=mp[xr];mp[x]++;
}return c;
}
