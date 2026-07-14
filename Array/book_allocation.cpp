// #include<iostream>
// #include<vector>
// using namespace std;

// bool isValid(vector<int> &arr, int n , int m , int maxAllowed){
//     int stu = 1 , pages = 0 ;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > maxAllowed) return false ;
//         if (arr[i]+pages <= maxAllowed)
//         {
//             pages += arr[i];
//         }
//         else {
//             pages = arr[i];
//             stu++;
//         }
//     }
//     return stu <= m ;
// }

// int allocateBook(vector<int> &arr, int n , int m){
//     int sum = 0 ;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         sum += arr[i];
//     }
//     int st = 0 , end = sum , ans = -1 ;
//     while (st<=end)
//     {
//         int mid = st + (end-st)/2;
//         if (isValid(arr,n,m,mid))
//         {
//             end = mid-1;
//             ans = mid ;
//         }
//         else {
//             st= mid + 1;
//         }
//     }
//     return ans ;
// }
// int main() {
//     vector<int> arr ={2,1,3,4};
//     int n = 4 ;
//     int m = 2 ;
//     cout << allocateBook(arr,n,m);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// bool isValid(vector<int> arr , int n , int m,int maxAllowedBooks){
//     int student = 1 , book = 0 ;
//     for (int i = 0; i < n; i++)
//     {
//         if (book+arr[i]<=maxAllowedBooks)
//         {
//             book += arr[i];
//         }
//         else {
//             book = arr[i];
//             student++ ;
//         }

//     }
//     return student <= m ;

// }

// int allocation(vector<int> arr , int n , int m){
//     int strt = 0 , sum = 0 , ans = -1 ;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     int end = sum;
//     while (strt <= end)
//     {
//         int mid = strt + (end-strt)/2;
//         if(isValid(arr,n,m,mid)){
//             end = mid - 1 ;
//             ans = mid ;
//         }
//         else {
//             strt = mid + 1 ;
//         }
//     }
//     return ans ;

// }
                 
// int main()
// {
//     vector<int> arr = {25, 46, 28, 49, 24};
//     int m = 4;
//     cout << findPages(arr, m);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isValid(vector<int> nums, int m, int mid)
// {
//     int student = 1, pages = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] > mid)
//             return false;
//         if (pages + nums[i] > mid)
//         {
//             student++;
//             pages += nums[i];
//         }
//         else
//             pages += nums[i];
//     }
//     if (student > m)
//         return false;
//     else
//         return true;
// }
// int findPages(vector<int> &nums, int m)
// {
//     int start = 0, end = 0, ans = -1;
//     for (int val : nums)
//     {
//         end += val;
//     }
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (isValid(nums, m, mid))
//         {
//             end = mid - 1;
//             ans = mid;
//         }
//         else
//             start = mid + 1;
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {25, 46, 28, 49, 24};
//     int m = 4;
//     cout << findPages(arr, m);
//     return 0;
// }

// all updated