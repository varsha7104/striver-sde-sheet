/*You are given an unsorted array/list 'ARR' of 'N' integers. Your task is to return the length of the longest consecutive sequence.

The consecutive sequence is in the form ['NUM', 'NUM' + 1, 'NUM' + 2, ..., 'NUM' + L] where 'NUM' is the starting i
nteger of the sequence and 'L' + 1 is the length of the sequence.

Note:

If there are any duplicates in the given array we will count only one of them in the consecutive sequence.*/
#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    int maxi=0;
    int c;
    set<int>st(arr.begin(),arr.end());
    for(auto it:st){
        if(st.find(it-1)==st.end()){
             c=1;
         int    x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                c++;
            }
        maxi=max(maxi,c);}
    }return maxi;
}
