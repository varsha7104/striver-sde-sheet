/*Problem statement
You are given an integer N. Your task is to return a 2-D ArrayList containing the pascal’s triangle till the row N.

A Pascal's triangle is a triangular array constructed by summing adjacent elements in preceding rows. Pascal's triangle contains the values of the binomial coefficient. 
For example in the figure below.

*/#include <bits/stdc++.h>

vector<long long int>rec(int n){
  vector<long long>ans;
  long long  res=1;
  ans.push_back(1);
  for(int i=1;i<n;i++){
    res*=(n-i);
    res/=i;
    ans.push_back(res);
  }return ans;
}
vector<vector<long long int>> printPascal(int n) 
{vector<vector<long long int>>ans;
  for(int i=1;i<=n;i++){
ans.push_back(rec(i));
  }return ans;
}
