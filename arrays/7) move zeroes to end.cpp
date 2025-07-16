
/*Given an unsorted array of integers, you have to move the array elements in a way such that all the zeroes are transferred to the end, and all the non-zero
elements are moved to the front. The non-zero elements must be ordered in their order of appearance.

For example, if the input array is: [0, 1, -2, 3, 4, 0, 5, -27, 9, 0], then the output array must be:

[1, -2, 3, 4, 5, -27, 9, 0, 0, 0].

Expected Complexity: Try doing it in O(n) time complexity and O(1) space complexity. Here, ‘n’ is the size of the array.*/

void pushZerosAtEnd(vector<int> &arr) 
{
	int n=arr.size();
int j=-1;
for(int i=0;i<arr.size();i++){
	if(arr[i]==0){ j=i; break;
}}if(j==-1) return;
for(int i=j+1;i<n;i++){
	if(arr[i]!=0){
		int t=arr[i];
		arr[i]=arr[j];
		arr[j]=t;
j++;
	}
}
}
