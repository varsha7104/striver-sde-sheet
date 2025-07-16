/*You have been given an array/list 'ARR' of integers. Your task is to find the second largest element present in the 'ARR'.

Note:
a) Duplicate elements may be present.

b) If no such element is present return -1.
Example:
Input: Given a sequence of five numbers 2, 4, 5, 6, 8.

Output:  6*/
#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    int maxi=INT_MIN,smaxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(maxi<arr[i]){
            smaxi=maxi;maxi=arr[i];}
        else if(smaxi<arr[i] && arr[i]!=maxi) smaxi=arr[i];

    }return smaxi==INT_MIN?-1:smaxi;
    // Write your code here.
}
