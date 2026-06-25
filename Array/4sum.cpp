// // bruit force 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<set>
// using namespace std;

// vector<vector<int>> fourSum(vector<int>& nums){
//     sort(nums.begin(),nums.end());
//     int n = nums.size();
//     set<vector<int>> s ;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             for (int k = j+1; k < n; k++)
//             {
//                 for (int l = k+1; l < n; l++)
//                 {
//                     int sum = nums[i]+nums[j]+nums[k]+nums[l];
//                     if (sum==0)
//                     {
//                         s.insert({nums[i],nums[j],nums[k],nums[l]});
//                     }
                    
//                 }
                
//             }
            
//         }
        
//     }
//     vector<vector<int>> ans = {s.begin(),s.end()} ;
//     return ans ;
    
// }
                 
// int main() {
//     vector<int> arr = {-2,-1,-1,1,1,2,2};
//     vector<vector<int>> ans = fourSum(arr);
//     for(auto vec : ans){
//         for(auto val : vec){
//             cout << val << " " ;
//         }
//         cout << endl;
//     }       
//     return 0;
// }

// optimized

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans ;
    for (int i = 0; i < n; i++)
    {
        if(i>0 && nums[i]==nums[i-1]) continue;
        for (int j = i+1; j < n; j++)
        {
            if(j>i+1 && nums[j]==nums[j-1]) continue;
            int k = j+1 ;
            int l = n-1;
            while (k<l)
            {
                int sum = nums[i]+nums[j]+nums[k]+nums[l];
                if(sum<0) k++;
                else if(sum>0) l--;
                else{
                    ans.push_back({nums[i],nums[j],nums[k],nums[l]}) ;
                    k++ ; l-- ;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(k<l && nums[l]==nums[l+1]) l--;
                }
            }
            
        }
        
    }
    return ans ;
    
}
                 
int main() {
    vector<int> arr = {-2,-1,-1,1,1,2,2};
    vector<vector<int>> ans = fourSum(arr);
    for(auto vec : ans){
        for(auto val : vec){
            cout << val << " " ;
        }
        cout << endl;
    }               
    return 0;
}

