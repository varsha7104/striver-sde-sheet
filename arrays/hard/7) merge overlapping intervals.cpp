/*Problem statement
Ninja is playing with intervals. He has an array of intervals called ‘Arr’ having ‘N’ intervals.



However, he doesn’t like overlapping intervals. So you must help Ninja by merging all the overlapping intervals in ‘Arr’ and return an array of non-overlapping intervals.



Note:
Two intervals [L1, R1] and [L2, R2] such that L1 <= L2, are said to be overlapping if and only if L2 <= R1.
For example:
For ‘N’ = 4, and 
‘Arr’ = {{1, 3}, {2, 4}, {3, 5}, {6, 7}}
We can see that {1, 3} and {2, 4} overlap, so if we merge them, we get {1, 4}.
Now ‘Arr’ becomes: {{1, 4}, {3, 5}, {6, 7}}
Still, we observe that {1, 4} and {3, 5} overlap, hence we merge them into {1, 5}.
Hence, ‘Arr’ becomes {{1, 5}, {6, 7}}.*/
#include<vector>

vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr){
	vector<vector<int>>ans;
	for(int i=0;i<arr.size();i++){
		if(ans.empty()|| ans.back()[1]<arr[i][0]){
			ans.push_back(arr[i]);
		}else {
			ans.back()[1]=max(ans.back()[1],arr[i][1]);
		}
	}return ans;
	
}
