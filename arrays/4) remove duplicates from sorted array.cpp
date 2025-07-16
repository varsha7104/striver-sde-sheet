/*Remove duplicates from Sorted array*/
 Remove Duplicates from Sorted Array
You need to remove the duplicates from the array such that each element appears only once.
Return the length of this new array.
Note:
Do not allocate extra space for another array. You need to do this by modifying the given input array in place with O(1) extra memory. 
  int removeDuplicates(vector<int> &arr, int n) {
	
	int j=0;
	for(int i=1;i<n;i++){
		if(arr[i]!=arr[i-1]){
			arr[j]=arr[i];
			j++;
		}
	}return j+1;
}
