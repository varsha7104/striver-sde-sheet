/*You are given an array ‘a’ of ‘n’ integers.
You have to return the lexicographically next to greater permutation.
Note:
If such a sequence is impossible, it must be rearranged in the lowest possible order.
Example:

Input: 'a' = [1, 3, 2]

Output: 2 1 3*/
#include<bits/stdc++.h>
vector<int> nextGreaterPermutation(vector<int> &A) {
   next_permutation(A.begin(),A.end());
   return A;
}
