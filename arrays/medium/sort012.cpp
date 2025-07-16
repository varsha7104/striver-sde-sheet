/*roblem statement
You have been given an array/list 'arr' consisting of 'n' elements.



Each element in the array is either 0, 1 or 2.



Sort this array/list in increasing order.



Do not make a new array/list. Make changes in the given array/list.



Example :
Input: 'arr' = [2, 2, 2, 2, 0, 0, 1, 0]

Output: Final 'arr' = [0, 0, 0, 1, 2, 2, 2, 2]

Explanation: The array is sorted in increasing order.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
8
2 2 2 2 0 0 1 0


Sample Output 1:
0 0 0 1 2 2 2 2


Explanation of sample input 1 :
The initial array 'arr' is [2, 2, 2, 2, 0, 0, 1, 0].

After sorting the array in increasing order, 'arr' is equal to:
[0, 0, 0, 1, 2, 2, 2, 2]


Sample Input 2:
5
1 1 1 1 1


Sample Output 2:
1 1 1 1 1


Expected time complexity :
The expected time complexity is O(n).


Constraints:
1 <= 'n' <= 10 ^ 4
0 <= 'arr[i]' <= 2

Time limit: 1 second
*/
#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
   int l=0,m=0,h=n-1;
   while(m<=h){
       if(arr[m]==0){
           swap(arr[l],arr[m]);
           l++;m++;
       }else if(arr[m]==1) m++;
       else{
           swap(arr[m],arr[h]);
           h--;
       }
   }
}
