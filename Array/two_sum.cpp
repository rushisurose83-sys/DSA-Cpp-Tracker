// #include<iostream>
// #include<vector>
// #include<utility>
// using namespace std;

// pair<int,int> pairsum(vector<int>& arr, int tar){
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0 ;
//         for (int j = i+1; j < n; j++)
//         {
//             sum = arr[i]+arr[j];
//             if (sum==tar)
//             {
//                 return pair<int,int>(i,j);
//             }
            
//         }
        
//     }
//     return pair<int,int>(-1,-1);
    
// }
                 
// int main() {
//     vector<int> arr = {5,2,11,7,15};
//     int tar = 9 ;
//     pair<int,int> result = pairsum(arr, tar);
//     cout << result.first << " " << result.second;
//     return 0;
// }

// better
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// pair<int,int> pairSum(vector<int>& arr,int tar){
//     int n = arr.size();
//     int i = 0 , j = n-1;
//     sort(arr.begin(),arr.end());
//     while (i<j)
//     {
//         int sum = arr[i]+arr[j];
//         if (sum>tar)
//         {
//             j--;
//         }
//         else if(sum<tar){
//             i++;
//         }
//         else{
//             return pair<int,int>(i,j);
//         }
        

//     }
//     return pair<int,int>(-1,-1);
    

// }
                 
// int main() {
//     vector<int> arr = {5,2,11,7,15};
//     int tar = 9 ;
//     pair<int,int> result = pairSum(arr,tar);
//     cout << result.first << " " << result.second << endl;       
//     return 0;
// }

// optimized
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& arr,int tar){
    unordered_map<int,int>m;
    vector<int> ans ;
    for (int i = 0; i < arr.size(); i++)
    {
        int first = arr[i];
        int sec = tar-first;
        if (m.find(sec)!=m.end())
        {
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first]=i;
        
    }
    return ans;
    

}


                 
int main() {
    vector<int> arr = {5,2,11,7,15};
    int tar = 9 ;   
    vector<int> ans = twoSum(arr,tar);
    for(int val:ans){
        cout << val << " " ;
    }  
    return 0;
}