// subset
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<vector<int>> search(int i , vector<int> backtrack , vector<int> arr){
//     vector<vector<int>> sol ;
//     if (i >= arr.size())
//     {
//         sol.push_back(backtrack);
//         return {backtrack};
        
//     }

//     backtrack.push_back(arr[i]);
//     vector<vector<int>> left = search(i+1,backtrack,arr);

//     backtrack.pop_back();
//     vector<vector<int>> right = search(i+1,backtrack,arr);

//     // merge 
//     left.insert(left.end(),right.begin(),right.end());
//     return left ;
    
// }
                 
// int main() {
//     vector<int> nums = {1,2,3};
//     vector<int> backtrack ;
//     vector<vector<int>> ans = search(0,backtrack,nums) ;
//     for(auto vec : ans){
//         for(auto val : vec){
//                 cout << val << " ";
//         }
//         cout << endl ;
//     }
//     return 0;
// }

// subset 2 

// #include<iostream>
// #include<vector>
// #include<set>
// #include<algorithm>
// using namespace std;

// void subset(int i , vector<int>& backtrack , vector<int>& arr ,set<vector<int>>& ans ){
//     if(i>= arr.size()){
//         ans.insert(backtrack);
//         return ;
//     }

//     backtrack.push_back(arr[i]);
//     subset(i+1,backtrack,arr,ans);

//     backtrack.pop_back();

//     subset(i+1,backtrack,arr,ans);

// }
// vector<vector<int>> subsetsWithDup(vector<int> &nums)
// {
//     sort(nums.begin(),nums.end());
//     set<vector<int>> ans ;
//     vector<int> backtrack ;
//     subset(0,backtrack,nums,ans);
//     vector<vector<int>> sol = {ans.begin(),ans.end()};
//     return sol ;
// }

// int main() {
//     // example usage of subsetsWithDup
//     vector<int> nums = {1, 2, 2};
//     vector<vector<int>> res = subsetsWithDup(nums);
//     for (const auto &vec : res) {
//         cout << "[";
//         for (size_t i = 0; i < vec.size(); ++i) {
//             cout << vec[i];
//             if (i + 1 < vec.size()) cout << ", ";
//         }
//         cout << "]\n";
//     }
//     return 0;
// }


// combination sum 1
// #include<iostream>
// #include<vector>
// using namespace std;

// void subarr(int i,int currSum ,int target,vector<int>& backtrack,vector<int>&arr,vector<vector<int>>& ans){
//         if(currSum == target){
//             ans.push_back(backtrack);
//             return ;
//         }
//         if(i>=arr.size() || currSum > target){
//             return ;
//         }

//         backtrack.push_back(arr[i]);
//         subarr(i,currSum+arr[i],target,backtrack,arr,ans);

//         backtrack.pop_back();

//         subarr(i+1,currSum,target,backtrack,arr,ans);
//     }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>> ans ;
//         vector<int> backtrack ;
//         subarr(0,0,target,backtrack,candidates,ans);
//         return ans ;
//     }
                 
// int main() {
//     vector<int> candidates = {2, 3, 6, 7};
//     int target = 7;
//     vector<vector<int>> result = combinationSum(candidates, target);
//     for (const auto &vec : result) {
//         cout << "[";
//         for (size_t i = 0; i < vec.size(); ++i) {
//             cout << vec[i];
//             if (i + 1 < vec.size()) cout << ", ";
//         }
//         cout << "]\n";
//     }
//     return 0;
// }




// Check if there exists a subsequence with sum K

// #include<iostream>
// #include<vector>
// using namespace std;

// void subset(int i, int currSum, int k, vector<int> &backtrack, vector<int> &arr, vector<int> &ans)
// {
//     if (currSum == k)
//     {
//         ans.push_back(1);
//         return;
//     }
//     if (i >= arr.size() || currSum > k)
//         return;

//     backtrack.push_back(arr[i]);
//     subset(i + 1, currSum + arr[i], k, backtrack, arr, ans);

//     backtrack.pop_back();
//     subset(i + 1, currSum, k, backtrack, arr, ans);
// }
// bool checkSubsequenceSum(vector<int> &nums, int k)
// {
//     vector<int> ans;
//     vector<int> backtrack;
//     subset(0, 0, k, backtrack, nums, ans);
//     for (int val : ans)
//     {
//         if (val == 1)
//             return 1;
//     }
//     return 0;
// }

// int main() {
//     vector<int> nums = {1, 2, 3, 4, 5};
//     int k = 8;
//     cout << checkSubsequenceSum(nums, k) << endl;
//     return 0;
// }


// class Solution{
//     public:
//     bool subset(int i , int currSum , int k, vector<int>& arr){
//         if(currSum==k){
//             return true ;
//         }
//         if(i>=arr.size() || currSum > k) return false ;

//         if(subset(i+1,currSum+arr[i],k,arr)) return true;

//         if(subset(i+1,currSum,k,arr)) return true;

//         return false ;
        
//     }
//     bool checkSubsequenceSum(vector<int>& nums, int k) {
//         return subset(0,0,k,nums);
//     }
// };