/*You are given an array ‘arr’ that contains an equal number of positive and negative elements. Rearrange the given array s
uch that positive and negative numbers are arranged alternatively. Also, the respective relative order of positive and negative should be maintained.

For example:

For the given arr[ ] = { -1, 3, 5, 0, -2, -5 } 
arr[ ] = {3, -1, 5, -2, 0, -5 } is valid rearrangement.
arr[ ] = {3, -1, 0, -2, 5, -5 } is invalid rearrangement; order of 0 and 5 is changed. 
arr[ ] = {3, -1, 5, 0, -2, -5 } is invalid rearrangement; positive and negative elements are not alternative.
*/#include <bits/stdc++.h> 

void posAndNeg(vector<int> &arr)
{
  vector<int>neg,pos;
  for(int i=0;i<arr.size();i++){
      if(arr[i]<0) neg.push_back(arr[i]);
      else pos.push_back(arr[i]);
  }int i=0,j=0;
  int n=neg.size(),m=pos.size();
  int k=0;
  while(i<n && j<m){
arr[k]=pos[j];
arr[k+1]=neg[i];
k+=2;
i++;j++;
  }
  while(i<n){
      arr[k++]=neg[i++];
  }while(j<m){
      arr[k++]=pos[j++];
}
}
