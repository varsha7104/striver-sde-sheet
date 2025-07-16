/*You are given an integer array arr[]. You need to find the maximum sum of a subarray 
(containing at least one element) in the array arr[].

Note : A subarray is a continuous part of an array.*/
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int s=0;
        int maxi=INT_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++){
            s+=arr[i];
           
            if(maxi<s) maxi=s;
             if(s<0)s=0;
        }
        return maxi;
    }
};
