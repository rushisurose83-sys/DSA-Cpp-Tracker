// 1st thinking + remove duplicates from codex

// #include<iostream>
// #include<vector>
// #include<set>
// #include<algorithm>
// using namespace std;

// vector<vector<int>> threeSum(vector<int>& nums){
//     int n = nums.size();
//     vector<vector<int>> solution ;
//     sort(nums.begin(),nums.end());
//     for (int i = 0; i < n; i++)
//     {
//         if(i>0 && nums[i]==nums[i-1]) continue;
//         for (int j = i+1; j < n; j++)
//         {
//             if(j>i+1 && nums[j]==nums[j-1]) continue;
//             for (int k = j+1; k < n; k++)
//             {
//                 if(k>j+1 && nums[k]==nums[k-1]) continue;
//                 if (nums[i]+nums[j]+nums[k]==0)
//                 {
//                     vector<int> temp = {nums[i],nums[j],nums[k]};
//                     sort(temp.begin(),temp.end());
//                     solution.push_back(temp);
//                 }
                
                
//             }
            
//         }
        
//     }
//     return solution;
    
// }
                 
// int main() {
//     vector<int> nums = {-1,0,1,2,-1,-4} ;
//     vector<vector<int>> solution = threeSum(nums);
//     for(auto vec : solution ){
//         for(int val : vec){
//             cout << val << " " ;
//         }
//         cout << endl ;
//     } 
//     return 0;
// }


// #include<iostream>
// #include<set>
// #include<vector>
// #include<algorithm>
// using namespace std;

// set<vector<int>> threeSum(vector<int>& nums){
//     int n = nums.size() ;
//     set<vector<int>> st ;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             for (int k = j+1; k < n; k++)
//             {
//                 if (nums[i]+nums[j]+nums[k]==0)
//                 {
//                     vector<int> temp = {nums[i],nums[j],nums[k]} ;
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
                
//             }
            
//         }
        
//     }
//     return st ;
    

// }
                 
// int main() {
//     vector<int> nums = {-1,0,1,2,-1,-4} ;
//     set<vector<int>> solution = threeSum(nums);
//     for(auto vec : solution){
//         for(auto val : vec){
//             cout << val << " ";
//         }
//         cout << endl ;
//     }        
//     return 0;
// }

// #include<iostream>
// #include<set>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<vector<int>> threeSum(vector<int>& nums){
//     int n = nums.size();
//     set<vector<int>> triplet;
//     for (int i = 0; i < n; i++)
//     {
//         int tar = -nums[i];
//         set<int> s ;
//         for (int j = i+1; j < n; j++)
//         {
//             int c = tar - nums[j];
//             if (s.find(c)!=s.end())
//             {
//                 vector<int> temp = {nums[i],nums[j],c};
//                 sort(temp.begin(),temp.end());
//                 triplet.insert(temp);
                
//             }
//             s.insert(nums[j]);
            
//         }
        
//     }
//     vector<vector<int>> ans(triplet.begin(),triplet.end());
//     return ans ;
    
// }
                 
// int main() {
//     vector<int> nums = {-1,0,1,2,-1,-4} ;
//     vector<vector<int>> solution = threeSum(nums);   
//     for(auto vec : solution){
//         for(auto val : vec){
//             cout << val << " ";
//         }
//         cout << endl ;
//     }    
//     return 0;
// }

// two pointer approach
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int> nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans ;
    for (int i = 0; i < n; i++)
    {
        if(i>0 && nums[i]==nums[i-1]) continue;
        int j = i+1 ;
        int k = n-1 ;
        while (j<k)
        {
            
            if (nums[i]+nums[j]+nums[k]<0)
            {
                j++;
            }
            else if(nums[i]+nums[j]+nums[k]>0){
                k--;
            }
            else {
                ans.push_back({nums[i],nums[j],nums[k]});
                j++;k--;
                while(j < k && nums[j] == nums[j - 1]) j++;
                while(j < k && nums[k] == nums[k + 1]) k--;
            }
        }
    }
    return ans ;
    
}
                 
int main() {
    vector<int> nums = {-1,0,1,2,-1,-4} ;
    vector<vector<int>> solution = threeSum(nums);   
    for(auto vec : solution){
        for(auto val : vec){
            cout << val << " ";
        }
        cout << endl ;        
    }
    return 0 ;
}