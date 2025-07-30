/*Given an array of N integers and Q queries of indices. For each query indices[i], determine the count of elements in arr that are strictly greater than arr[indices[i]] to its right (after the position indices[i]).

Examples :

Input: arr[] = [3, 4, 2, 7, 5, 8, 10, 6], queries = 2, indices[] = [0, 5]
Output:  [6, 1]
Explanation: The next greater elements to the right of 3(index 0) are 4,7,5,8,10,6. The next greater elements to the right of 8(index 5) is only 10.
Input: arr[] = [1, 2, 3, 4, 1], queries = 2, indices[] = [0, 3]
Output:  [3, 0]
Explanation: The count of numbers to the right of index 0 which are greater than arr[0] is 3 i.e. (2, 3, 4). Similarly, the count of numbers to the right of index 3 which are greater than arr[3] is 0, since there are no greater elements than 4 to the right of the array.
Constraints:
1 <= N <= 104
1 <= arr[i] <= 105
1 <= queries <= 100
0 <= indices[i] <= N - 1




*/// User function Template for C++

class Solution {
  public:

    vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices) {
     stack<int>st;
     multiset<int>m;
     vector<int>sns;
     for(int i=n-1;i>=0;i--){
         auto it=m.upper_bound(arr[i]);
         sns[i]=distance(it,m.end());
         m.push(arr[i]);

     }
     vector<int>v;
     for(int i=0;i<queries;i++){
         v.push_back(mp[indices[i]]);
     }return v;
    }
};
