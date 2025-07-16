/*You are given an integer array 'arr' of size 'N' and an integer 'K'.

Your task is to find the total number of subarrays of the given array whose sum of elements is equal to k.

A subarray is defined as a contiguous block of elements in the array.

Example:
Input: ‘N’ = 4, ‘arr’ = [3, 1, 2, 4], 'K' = 6

Output: 2

Explanation: The subarrays that sum up to '6' are: [3, 1, 2], and [2, 4]*/
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    map<int,int>mp;
    int n=arr.size();
    int s=0;
    int c=0;
    mp[0]=1;
    for(int i=0;i<n;i++){
s+=arr[i];
int r=s-k;
c+=mp[r];
mp[s]+=1;
    }return c;
}
