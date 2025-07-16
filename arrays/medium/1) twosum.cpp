/*Problem statement
Sam want to read exactly ‘TARGET’ number of pages.

He has an array ‘BOOK’ containing the number of pages for ‘N’ books.

Return YES/NO, if it is possible for him to read any 2 books and he can meet his ‘TARGET’ number of pages.

Example:
Input: ‘N’ = 5, ‘TARGET’ = 5
‘BOOK’ = [4, 1, 2, 3, 1] 
**/
  string read(int n, vector<int> book, int target)
{
   sort(book.begin(),book.end());
   int l=0,r=n-1;
   while(l<r){
    int s=book[l]+book[r];
    if(s==target) return "YES";
    else if(s<target) l++;
    else r--;
   }return "NO";
}
