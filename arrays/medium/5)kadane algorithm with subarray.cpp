/*There might be more than one subarray with the maximum sum. We need to print any of them.*/
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int s=0;
        int maxi=INT_MIN;
        int n=arr.size();
        int st=0,anss=-1,anse=-1;
        for(int i=0;i<n;i++){
            
            
            s+=arr[i];
           
            if(maxi<s) {maxi=s;anss=st;
            anse=i;}
             if(s<0){s=0; st=i;}
        }
        for(int i=anss;i<=anse;i++) cout<<arr[i]<<" ";
        return maxi;
    }
};/*o/p:
1 2 3 -2 5
1 2 3 -2 5 
9

*/
