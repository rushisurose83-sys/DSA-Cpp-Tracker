// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pairSum(vector<int> nums , int target){
//     vector<int> ans ;
//     int n = sizeof(nums)/sizeof(int);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (nums[i]+nums[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans ;
//             }

//         }

//     }
//     return ans ;

// }

// int main() {
//     vector<int> nums = {2,3,4,5,6,7} ;
//     int target = 6 ;
//     vector<int> ans = pairSum(nums , target) ;
//     cout << ans[0] << "," << ans[1] << endl ;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> nums = {2,3,4,5,6};
//     int n = nums.size();
//     for (int i = 0; i < n; i++)
//     {
//         cout << nums[i] << " " ;
//     }

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pairSum(vector<int> nums , int target){
//     int size = nums.size();
//     vector<int> ans ;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//             if (nums[i]+nums[j]==target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans ;
//             }

//         }

//     }
//     return ans;

// }

// int main() {
//     vector<int> nums = {2,7,11,15};
//     int target = 9 ;
//     vector<int> ans = pairSum(nums,target);
//     cout << ans[0] << "," << ans[1];
//     return 0;
// }

// pairSum by two pointer approch

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> paiSum(vector<int> nums , int target){
//     int n = nums.size();
//     vector<int> ans ;
//     int i = 0 , j = n-1 ;
//     while (i<j)
//     {
//         int pairSum = nums[i]+nums[j];
//         if (pairSum > target)
//         {
//             j-- ;
//         }
//         else if (pairSum<target)
//         {
//             i++ ;
//         }
//         else {
//         ans.push_back(i) ;
//         ans.push_back(j) ;
//         return ans ;
//         }

//     }
//     return ans ;

// }
// int main() {
//     vector<int> nums = {2,7,11,15};
//     int target = 9 ;
//     vector<int> ans = paiSum(nums,target) ;
//     cout << ans[0] << "," << ans[1];

//     return 0;
// }

// majority ele
// #include<iostream>
// #include<vector>
// using namespace std;

// int majEle(vector<int> nums){
//     int n = nums.size();
//     for (int val : nums)
//     {
//         int freq = 0 ;
//         for (int ele : nums)
//         {
//             if (ele == val)
//             {
//                 freq++ ;
//             }

//         }
//         if (freq>n/2)
//         {
//             return val ;
//         }

//     }
//     return -1 ;

// }

// int main() {
//     vector<int> nums = {1,2,2,1,1};
//     int maj = majEle(nums);
//     cout << maj << endl ;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int majEle(vector<int> nums){
//     int n = nums.size();
//     sort(nums.begin(),nums.end());
//     int freq = 1 , ans = nums[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (nums[i]==nums[i-1])
//         {
//            freq ++ ;
//         }
//         else{
//             freq = 1 ; ans = nums[i];
//         }
//         if (freq>n/2)
//         {
//             return ans ;
//         }

//     }
//     return ans ;

// }

// int main() {
//     vector<int> nums = {1,2,2,1,1};
//     int mj = majEle(nums);
//     cout << mj << endl ;
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int majEle(vector<int> nums){
//     int n = nums.size();
//     sort(nums.begin(),nums.end());
//     int freq = 1 , ans = nums[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] == nums[i-1])
//         {
//             freq++;
//         }
//         else {
//             freq = 1 ;
//             ans = nums[i];
//         }
//         if (freq > n/2)
//         {
//             return ans ;
//         }

//     }
//     return ans ;

// }

// int main() {
//     vector<int> nums = {1,2,2,1,1,1};
//     cout << majEle(nums);
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int majEle(vector<int> nums){
//     int freq = 0 , ans = 0 ;
//     for(int val : nums){
//         if (freq == 0)
//         {
//             ans = val ;
//         }
//         if (ans == val)
//         {
//             freq++ ;
//         }

//         else{
//             freq -- ;
//         }

//     }
//     return ans ;
// }

// int main() {
//     vector<int> nums = {1,2,2,1,1,1};
//     cout << majEle(nums);
//     return 0;
// }

// pairSum
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pairSum(vector<int> nums , int target){
//     int n = nums.size();
//     int i = 0 , j = n-1 ;
//     vector<int> ans ;
//     while (i<j)
//     {
//         int pairSum = nums[i]+nums[j];
//         if (pairSum > target)
//         {
//             j--;
//         }
//         else if (pairSum < target){
//             i++;
//         }
//         else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans ;
//         }

//     }
//     return ans ;

// }

// int main() {
//     vector<int> nums = {2,3,4,5,8};
//     int target = 7 ;
//     vector<int> ans = pairSum(nums , target);
//     for (int val : ans)
//     {
//         cout << val << " ";
//     }

//     return 0;
// }

// pairSum bruit Force

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pairSum(vector<int> nums , int target){
//     int n = nums.size();
//     vector<int> ans ;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = i ; j <= n; j++)
//         {
//             if (nums[i]+ nums[j] == target)  // comparison operator
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans ;
//             }

//         }

//     }
//     return ans ;

// }

// int main() {
//     vector<int> nums = {2,3,4,5,8};
//     int target = 7 ;
//     vector<int> ans = pairSum(nums , target);
//     cout << ans[0] << "," << ans[1] << endl ;
//     return 0;
// }

// pairSum

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> pairSum(vector<int> arr , int target){
//     int n = arr.size();
//     vector<int> ans ;
//     int found = 0 ;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             if (arr[i]+arr[j]==target)
//             {
//                 found = 1 ;
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 break ;
//             }

//         }

//     }
//     if (found)
//     {
//         return ans ;
//     }
//     else {
//         ans.push_back(-1);
//         return ans ;
//     }

// }

// int main() {
    // vector<int> arr = {1,3,5,7,9};
    // vector<int> ans = pairSum(arr,13);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " " ;
    // }

//     return 0;
// }

// two pointer for pair sum
// #include <iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// vector<int> pairSum(vector<int> arr, int target){
//     sort(arr.begin(),arr.end());
//     int n = arr.size() ;
//     int strt = 0 , end = n - 1 ;
//     vector<int> ans ;
//     while (strt<=end)
//     {
//         int sum = arr[strt]+arr[end];
//         if (sum < target)
//         {
//             strt++;
//         }
//         else if (sum > target)
//         {
//             end -- ;
//         }
//         else {
//             ans.push_back(arr[strt]);
//             ans.push_back(arr[end]);
//             break ;
//         }
        
        
//     }
//     return ans ; 
// }

// int main() {
//     vector<int> arr = {1,3,5,7,9};
//     vector<int> ans = pairSum(arr,14);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " " ;
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int majEle(vector<int> nums){
//     int n = nums.size();
//     for(int val : nums){
//         int freq = 0 ;
//         for(int ele : nums){
//             if (ele == val)
//             {
//                 freq++;
//             }
            
//         }
//         if (freq >= n/2)
//         {
//             return val ;
//         }
        
//     }
//     return -1 ;
// }
                 
// int main() {
//     vector<int> nums = {1,1,1,2,2,3};
//     cout << majEle(nums) ;       
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int majEle(vector<int> nums){
//     int n = nums.size();
//     sort(nums.begin(),nums.end());
//     int freq = 1 , ans = nums[0] ;
//     for (int i = 1; i < n; i++)
//     {
//         if (nums[i]==nums[i-1])
//         {
//             freq ++ ;
//         }
//         else {
//             freq = 1 ;
//             ans = nums[i];
//         }
//         if (freq >= n/2)
//         {
//             return ans ;
//         }
        
        
//     }
//     return -1 ;
    

// }
                 
// int main() {
//     vector<int> nums = {1,1,2,2,3,1};
//     cout << majEle(nums) ;         
//     return 0;
// }

// moors algo 

// #include<iostream>
// #include<vector>
// using namespace std;

// int majEle(vector<int> nums){
//     int n = nums.size();
//     int freq = 0 , ans = 0 ;
//     for (int i = 0; i < n; i++)
//     {
//         if (freq == 0)
//         {
//             ans = nums[i];
//             freq = 1 ;
//         }
//         else if (ans == nums[i])
//         {
//             freq++;
//         }
//         else{
//             freq--;
//         }  
//     }
//     return ans ;
    
// }
                 
// int main() {
//     vector<int> nums = {1,1,1,2,2};
//     cout << majEle(nums) ;        
//     return 0;
// }

// moore's

// #include<iostream>
// #include<vector>
// using namespace std;

// int majEle(vector<int> nums){
//     int n = nums.size();
//     int freq = 0 , ans = 0 ;
//     for (int i = 0; i < n; i++)
//     {
//         if (freq == 0)
//         {
//             ans = nums[i];
//             freq = 1 ;
//         }
//         else if (ans == nums[i])
//         {
//             freq++ ;
//         }
//         else {
//             freq -- ;
//         }    
//     }
//     return ans ;
    
    
    
// }
                 
// int main() {
//     vector<int> arr = {1,1,2,2,1} ;
//     cout << majEle(arr);
//     return 0;
// }