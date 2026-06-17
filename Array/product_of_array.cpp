// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> product(vector<int> nums){
//     int n = nums.size();
//     vector<int> ans ;
//     for (int i = 0; i < n; i++)
//     {
//         int product = 1 ;
//         for (int j = 0; j < n; j++)
//         {
//             product *= nums[j];
//         }
//         product /= nums[i];
//         ans.push_back(product);
        

//     }
//     return ans ;
    
// }
                 
// int main() {
//     vector<int> nums = {1,2,3,4};
//     vector<int> ans = product(nums);
//     for(int val : ans){
//         cout << val << ",";
//     }
            
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> product(vector<int> nums){
//     int n = nums.size();
//     vector<int> ans ;
//     for (int i = 0; i < n; i++)
//     {
//         int product = 1 ;
//         for (int j = 0; j < n; j++)
//         {
//             if (nums[i]==nums[j])
//             {
//                 continue;
//             }else{
//                 product *= nums[j];  
//             }
            
//         }
//         ans.push_back(product);
        

//     }
//     return ans ;
    
// }
                 
// int main() {
//     vector<int> nums = {1,2,3,4};
//     vector<int> ans = product(nums);
//     for(int val : ans){
//         cout << val << ",";
//     }
            
//     return 0;
// }

// optimizen N TC

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> product(vector<int> nums){
//     int n = nums.size();
//     vector<int> prefix(n) ;
//     vector<int> suffix(n) ;
//     vector<int> ans(n) ;
//     prefix[0] = 1 ;
//     suffix[n-1] = 1 ;
//     for (int i = 1; i < n; i++)
//     {
//         prefix[i] = prefix[i-1]*nums[i-1];
//     }
//     for (int i = n-2; i >= 0 ; i--)
//     {
//         suffix[i] = suffix[i+1]*nums[i+1];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         ans[i] = prefix[i]*suffix[i];
//     }
//     return ans ;   
// }
                 
// int main() {
//     vector<int> nums = {1,2,3,4};
//     vector<int> ans = product(nums);
//     for (int i = 0 ; i < nums.size() ; i++)
//     {
//         cout << ans[i] << " " ;
//     }
           
//     return 0;
// }

//  optimization SC 

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> product(vector<int> nums){
//     int n = nums.size();
//     vector<int> ans(n,1) ;
//     int prefix = 1 ;
//     for (int i = 1; i < n; i++)
//     {
//         ans[i] = ans[i-1]*nums[i-1];
//     }
//     int suffix = 1 ;
//     for (int i = n-2 ; i >= 0 ; i--)
//     {
//         suffix *= nums[i+1];
//         ans[i] *= suffix ;
//     }
//     return ans ;
    
    
// }
                 
// int main() {
//     vector<int> nums = {1,2,3,4};
//     vector<int> ans = product(nums);
//     for (int i = 0; i < nums.size(); i++)
//     {
//         cout << ans[i] << " " ;
//     }       
//     return 0;
// }

// practice

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> product(vector<int> nums){
//     int n = nums.size();
//     vector<int> ans ;
//     for (int i = 0; i < n; i++)
//     {
//         int product = 1 ;
//         for (int j = 0; j < n; j++)
//         {
//             if(nums[i]!=nums[j]){
//                 product *= nums[j];

//             }
//         }
//         ans.push_back(product);
        
//     }
//     return ans ;
    
// }
                 
// int main() {
//     vector<int> nums = {1,2,3,4};
//     vector<int> ans = product(nums);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
          
//     return 0;
// }

// optimize

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> product(vector<int> nums){
//     int n = nums.size();
//     vector<int> prefix(n);
//     vector<int> suffix(n);
//     vector<int> ans(n);
//     prefix[0] = 1 ;
//     suffix[n-1] = 1 ;
//     for (int i = 1; i < n; i++)
//     {
//         prefix[i] = prefix[i-1]*nums[i-1];
//     }
//     for (int i = n-2; i >= 0 ; i--)
//     {
//         suffix[i] = suffix[i+1]*nums[i+1];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         ans[i] = prefix[i]*suffix[i];
//     }
//     return ans ;

    

// }
                 
// int main() {
//     vector<int> nums = {1,2,3,4};
//     vector<int> ans = product(nums);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }        
//     return 0;
// }

// more optimized

#include<iostream>
#include<vector>
using namespace std;

vector<int> product(vector<int> nums){
    int n = nums.size();
    vector<int> ans(n,1);
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i-1]*nums[i-1];
    }
    int suffix = 1 ;
    for (int i = n-2; i >= 0; i--)
    {
        suffix *= nums[i+1];
        ans[i] *= suffix ;
    }
    return ans ;
    
    
}
                 
int main() {
    vector<int> nums = {1,2,3,4};
    vector<int> ans = product(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
            
    return 0;
}