// bruit force 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<int> merge(vector<int> arr1 , vector<int> arr2){
//     for (int i = 0; i < arr2.size(); i++)
//     {
//         arr1.push_back(arr2[i]);
//     }
//     sort(arr1.begin(),arr1.end());
//     return arr1 ;
    
// }
                 
// int main() {
    // vector<int> arr1 = {1,2,3};
    // vector<int> arr2 = {2,5,6};
    // vector<int> ans = merge(arr1,arr2);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " " ;
    // }
    
    
            
//     return 0;
// }

// another 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<int> mergeArray(vector<int> arr1,int m ,vector<int> arr2,int n){
//     int idx = m+n-1 , i = m-1 , j = n - 1 ;
//     // adding two while both exist or j exhaust
//     while (i >= 0 && j >= 0)
//     {
//         // whatever is bigger replacing the last available index of an array and whatever replace the idx move to previous ele 
//         if (arr1[i]>arr2[j])
//         {
//             arr1[idx] = arr1[i] ;
//             idx--;
//             i--; 
//         }
//         else {
//             arr1[idx] = arr2[j];
//             idx--;
//             j--;
//         } 
//     }
//     // adding two when i exhaust
//     while (j>=0)
//     {
//         arr1[idx] = arr2[j];
//         j--;
//         idx--;
//     }
//     return arr1 ;
// }
                 
// int main() {
//     vector<int> arr1 = {1,2,3,0,0,0};
//     vector<int> arr2 = {2,5,6};
//     int m = 3,n = 3 ;
//     vector<int> ans = mergeArray(arr1,m,arr2,n);
//     for (int i = 0; i < m+n; i++)
//     {
//         cout << ans[i] << " " ;
//     }        
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<int> nextPer(vector<int> &nums){
//     int piv = -1;
//     int n = nums.size();
//     int strt = 0 , end = n-1 ;
//     // find piv
//     for (int i = n-2; i >= 0; i--)
//     {
//         if (nums[i]<nums[i+1])
//         {
//             piv = i ;
//             break ;
//         } 
//     }
//     // tackling edge
//     if (piv == -1)
//     {
//         reverse(nums.begin(),nums.end());
//         return nums;
//     }
    
//     // find greator than pivot
//     for (int i = n-1; i > piv; i--)
//     {
//         if (nums[i]>nums[piv])
//         {
//             swap(nums[i],nums[piv]);
//             break ;
//         }
        
//     }
//     // reverse the remaining number from descending to ascending 
    
//     int i = piv+1 , j = n-1 ;
//     while (i<j)
//     {
//         swap(nums[i],nums[j]);
//         i++;
//         j--;
//     }
    
//     // reverse(nums.begin()+piv+1,nums.end());
//     return nums ; 
// }
                 
// int main() {
//     vector<int> nums = {1,2,5,4,3};
//     vector<int> ans = nextPer(nums); 
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
         
//     return 0;
// }

// MAGIC

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
                 
// int main() {
//     vector<int> nums = {1,2,5,4,3};
//     next_permutation(nums.begin(),nums.end());
//     vector<int> ans = nums;
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " " ;
//     }      
//     return 0;
// }