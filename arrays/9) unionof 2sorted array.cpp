/*Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order.

Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.
Examples:

Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
Output: 1 2 3 4 5 6 7
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.*/

class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        
        vector<int>v;
        int i=0,j=0;
        int k=0;
        while(i<a.size() && j<b.size()){
            
            if( a[i]<=b[j]){
                if(v.empty()||v.back()!=a[i])
                v.push_back(a[i]);
                i++;
            }else {if(v.empty()||v.back()!=b[j])
               v.push_back(b[j]);
                j++;
            }
            k++;
        }
        while(i<a.size()){
            if(v.empty()||v.back()!=a[i])
           v.push_back(a[i]);
            i++;
            k++;
        }
        while(j<b.size()){
            if(v.empty()||v.back()!=b[j])
           v.push_back(b[j]);
            k++;
            j++;
        }
     return v;   // return vector with correct order of elements
    }
};
