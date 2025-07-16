/*ou are given an array 'a' of size 'n' and an integer 'k'.



Find the length of the longest subarray of 'a' whose sum is equal to 'k'.



Example :
Input: ‘n’ = 7 ‘k’ = 3
‘a’ = [1, 2, 3, 1, 1, 1, 1]

Output: 3

Explanation: Subarrays whose sum = ‘3’ are:

[1, 2], [3], [1, 1, 1] and [1, 1, 1]*/
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int l=0,r=0;
    long long s=a[0];
    int maxi=0;
    int n=a.size();
    while(r<n){
        while(l<=r && s>k){
            s-=a[l];
            l++;
        }
        if(s==k) maxi=max(maxi,r-l+1);
        r++;
        if(r<n) s+=a[r];
    }return maxi;
}
