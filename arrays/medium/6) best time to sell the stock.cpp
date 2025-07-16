/*You are given an array/list 'prices' where the elements of the array represent the prices of the stock as 
they were yesterday and indices of the array represent minutes. Your task is to find and return the maximum profit you can make by buying and selling the stock. You can buy and sell the stock only once.

Note:

You can’t sell without buying first.*/
#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
   
   int buy=INT_MAX,sell=INT_MIN;
   for(int i=0;i<prices.size();i++){
buy=min(buy,prices[i]);
sell=max(sell,prices[i]-buy);
   }return sell;
}
