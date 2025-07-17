/*Problem statement
Given an array ‘A’ of ‘N’ integers, find the majority elements of the array.

A majority element in an array ‘A’ of size ‘N’ is an element that appears more than floor(N / 3) times.

Note: The floor function returns the number rounded down to the nearest integer.

Note: Return the array of majority elements in sorted order.

Example:
Input: ‘N’ = 9 ‘A’ = [2, 2, 1, 3, 1, 1, 3, 1, 1]
*/


vector<int> majorityElement(vector<int> v) {
	vector<int>nums=v;
	int n=nums.size();
	int el=-1,c=0,el2=-1,d=0;
	for(int i=0;i<n;i++){
		if(c==0 && el2!=nums[i]) { c=1;el=nums[i];}
		else if(d==0 && el1!=nums[i]) { d=1;el2=nums[i];}
		else if(el==nums[i]){
			c++;
		}
		else if(el2==nums[i]) d++;
		
		
		else {c--;d--;}
	}
	c=0,d=0;
	for(int i=0;i<n;i++){
		if(el==nums[i])c++;
	 if(el2==nums[i])d++;
	}vector<int>ans;
	if(c>=n/3+1) ans.push_back(el);
	if(d>=n/3+1) ans.push_back(el2);
	if(ans.empty()) return {-1,-1};
	return ans;
}
