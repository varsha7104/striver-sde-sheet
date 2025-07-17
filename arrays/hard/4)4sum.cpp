/*You are given an array ‘NUMS’ of length ‘N’. You are also given an integer ‘TARGET’.



Return an array of all the unique quadruplets [ ‘NUMS[ a ]’, ‘NUMS[ b ]’, ‘NUMS[ c ]’, ‘NUMS[ d ]’ ] with the following conditions:



i. 0 <= a, b, c, d < ‘N’ and a, b, c, and d are distinct.

ii. NUMS[ a ] + NUMS[ b ] + NUMS[ c ] +NUMS[ d ] = TARGET



Return the array in any order.



Note:*/vector<vector<int>> fourSum(vector<int>& nums, int target) {
   vector<int>arr=nums;
   int n=nums.size();
vector<vector<int>>ans;
sort(arr.begin(),arr.end());
   for(int i=0;i<n;i++){
if(i>0 && arr[i]==arr[i-1]) continue;
for(int j=i+1;j<n;j++){
    if(j>i+1 && arr[j]==arr[j-1] ) continue;
    int k=j+1,l=n-1;
    while(k<l){
        int s=arr[i]+arr[j]+arr[k]+arr[l];
        if(s<target)  k++;
        else if(s>target ) l--;
        else {
            vector<int>temp={arr[i],arr[j],arr[k],arr[l]};
ans.push_back(temp);
k++;l--;
while(k<l && arr[k]==arr[k-1]) k++;
while(k<l && arr[l]==arr[l+1]) l--;
        }
    }
}}return ans;
   
}
