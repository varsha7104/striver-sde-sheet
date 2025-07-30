class Solution {
  public:
    int maxWater(vector<int> &arr) {
     int n=arr.size();
     int l=0,r=n-1;int res=0;
     int maxl=0,maxr=0;
     while(l<=r){
         if(arr[l]<=arr[r]){
             if(maxl<=arr[l])maxl=arr[l];
             else res+=(maxl-arr[l]);
             l++;
         }else {
             if(maxr<=arr[r]) maxr=arr[r];
             else res+=(maxr-arr[r]);
             r--;
         }
     }return res;
    }
};
