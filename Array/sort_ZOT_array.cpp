// /bruitforce

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<int> sortArray(vector<int> nums){
//     sort(nums.begin(),nums.end());
//     return nums ;
// }
                 
// int main() {
//     vector<int> nums = {2,0,2,1,1,0,1,2,0,0};
//     vector<int> ans = sortArray(nums);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " " ;
//     }         
//     return 0;
// }

// optimized approach

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> sortArray(vector<int> &nums){
//     int n = nums.size();
//     vector<int> ans ;
//     int cz = 0 , co = 0 , ct = 0 ;
//     // O(n)
//     for(int i = 0 ; i < n ; i++){
//         if (nums[i]==0)
//         {
//             cz++;
//         }
//         else if(nums[i]==1){
//             co++ ;
//         }
//         else {
//             ct++;
//         }
        
//     }
//     // O(n)
//     for (int i = 0; i < cz; i++)
//     {
//         ans.push_back(0);
//     }
//     for (int i = 0; i < co; i++)
//     {
//         ans.push_back(1);
//     }
//     for (int i = 0; i < ct; i++)
//     {
//         ans.push_back(2);
//     }
//     return ans ;
    
// }
                 
// int main() {
    // vector<int> nums = {2,0,2,1,1,0,1,2,0,0};
    // vector<int> ans = sortArray(nums);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " " ;
    // }
            
//     return 0;
// }


// another same code

// nums[idx++] == 0,1,2 ;

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> sortArray(vector<int> nums){
//     int n = nums.size();
//     int count1  = 0 , count0 = 0 , count2 = 0 ;
//     for (int i = 0; i < n; i++)
//     {
//         if(nums[i]==0) count0++ ;
//         else if(nums[i]==1) count1++ ;
//         else count2++ ;
//     }
//     int idx = 0 ;
//     for (int i = 0; i < count0; i++)
//     {
//         nums[idx++] = 0 ;
//     }
//     for (int i = 0; i < count1; i++)
//     {
//         nums[idx++] = 1;
//     }
//     for (int i = 0; i < count2; i++)
//     {
//         nums[idx++] = 2;
//     }
//     return nums ;   
    
// }
                 
// int main() {
    // vector<int> nums = {2,0,2,1,1,0,1,2,0,0};
    // vector<int> ans = sortArray(nums);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " " ;
    // }       
//     return 0;
// }

// optimal (dutch national flag algo)  // O(n)

// #include<iostream>
// #include<vector>
// using namespace std;

// void sortArray(vector<int> &nums){
//     int mid = 0 , high = nums.size()-1 , low = 0 ;
//     while (mid<=high)
//     {
//         if (nums[mid]==0)
//         {
//             swap(nums[low],nums[mid]);
//             low++;
//             mid++;
//         }
//         else if(nums[mid]==1) mid++ ;
//         else {
//             swap(nums[mid],nums[high]);
//             high-- ;
//         }
        
//     }
    
// }
                 
// int main() {
//     vector<int> nums = {2,0,2,1,1,0,1,2,0,0};
//     sortArray(nums);
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i] << " " ;
//     }           
//     return 0;
// }

// rev 
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> sortArray(vector<int> nums){
//     int n = nums.size();
//     int cz = 0 , co = 0 , ct = 0 ;
//     vector<int> ans ;
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i]==0)
//         {
//             cz++;
//         }
//         else if (nums[i]==1)
//         {
//             co++ ;
//         }
//         else {
//             ct++ ;
//         }
        
//     }

//     for (int i = 0; i < cz; i++)
//     {
//         ans.push_back(0);
//     }
//     for (int i = 0; i < co; i++)
//     {
//         ans.push_back(1);
//     }
//     for (int i = 0; i < ct; i++)
//     {
//         ans.push_back(2);
//     }
//     return ans ; 
// }
                 
// int main() {
//     vector<int> arr = {1,2,1,2,0,0,1,2};
//     vector<int> ans = sortArray(arr);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " " ;
//     }
           
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> sortArray(vector<int> nums){
//     int n = nums.size();
//     int cz = 0 , co = 0 , ct = 0 ;
//     int idx = 0 ;
//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i]==0)
//         {
//             cz++;
//         }
//         else if (nums[i]==1)
//         {
//             co++ ;
//         }
//         else {
//             ct++ ;
//         }
        
//     }

//     for (int i = 0; i < cz; i++)
//     {
//         nums[idx++] = 0 ;
//     }
//     for (int i = 0; i < co; i++)
//     {
//         nums[idx++] = 1 ;
//     }
//     for (int i = 0; i < ct; i++)
//     {
//         nums[idx++] = 2 ;
//     }
//     return nums ; 
// }
                 
// int main() {
//     vector<int> arr = {1,2,1,2,0,0,1,2};
//     vector<int> ans = sortArray(arr);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " " ;
//     }
           
//     return 0;
// }

// dutch flag 
// #include<iostream>
// #include<vector>
// using namespace std;

// void sorted(vector<int> &nums){
//     int low = 0 , high = nums.size()-1 , mid = 0 ;
//     while (mid<=high)
//     {
//         if (nums[mid] == 0)
//         {
//             swap(nums[low],nums[mid]);
//             low++ ;
//             mid++ ;
//         }
//         else if (nums[mid] == 1)
//         {
//             mid++ ;
//         }
//         else {
//             swap(nums[mid],nums[high]);
//             high-- ;
//         }
//     }
    
// }
                 
// int main() {
//     vector<int> nums = {1,2,1,2,2,0,0,1};
//     sorted(nums);
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << nums[i] << " " ;
//     }      
//     return 0;
// }