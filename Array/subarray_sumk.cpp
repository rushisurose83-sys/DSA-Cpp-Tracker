// #include<iostream>
// #include<vector>
// using namespace std;
// // arr = [9,4,20,3,10,5] tar = 33

// int subarray(vector<int> arr,int tar){
//     int n = arr.size();
//     vector<vector<int>> solution ;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = arr[i];
//         vector<int> ans = {arr[i]};
//         for (int j = i+1; j < n; j++)
//         {
//             ans.push_back(arr[j]);
//             sum += arr[j] ;
//             if(sum==tar){
//                 solution.push_back(ans);
//             }
//         }
        
//     }
//     return solution.size() ;
    
// }
                 
// int main() {
//     vector<int> arr = {9,4,20,3,10,5}   ;
//     int tar = 33 ;
//     cout << "ans :" << subarray(arr,tar);
//     // vector<vector<int>> ans = subarray(arr,tar);
//     // for(auto vec : ans){
//     //     for(auto val : vec){
//     //         cout << val << " " ;
//     //     }
//     //     cout << endl;
//     // }    
//     return 0;
// }

#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int subarray(vector<int> arr,int tar){
    int n = arr.size();
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    unordered_map<int,int> m ;
    int count = 0 ;
    for (int j = 0; j < n; j++)
    {
        if (prefixSum[j]==tar)
        {
            count ++ ;
        }
        int val = prefixSum[j] - tar ;
        if(m.find(val)!=m.end()){
            count += m[val];
        }
        if(m.find(prefixSum[j])==m.end()){
            m[prefixSum[j]] = 0 ;
        }
        m[prefixSum[j]]++;

    }
    return count ;
    
    
}
                 
int main() {
    vector<int> arr = {9,4,20,3,10,5}   ;
    int tar = 33 ;
    cout << "ans :" << subarray(arr,tar);        
    return 0;
}