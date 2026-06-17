// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool isPossible(vector<int> arr , int n , int c,int minAllowed){
//     sort(arr.begin(),arr.end());
//     int cow = 1 , lastPossible = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if ((arr[i]-lastPossible) >= minAllowed)
//         {
//             cow++ ;
//             lastPossible = arr[i];
//         }
//         if (cow == c)
//         {
//             return true ;
//         }
        
        
//     }
//     return false ;
    
// }

// int cow(vector<int> arr , int n , int c){
//     int strt = 1 , end ;
//     int maxVal ,minVal ;
//     int ans = -1 ;
//     for (int i = 0; i < n; i++)
//     {
//         maxVal = max(arr[i],maxVal);
//         minVal = min(arr[i],minVal); 
//     }
//     end = maxVal-minVal ;
//     while (strt <= end)
//     {
//         int mid = strt + (end-strt)/2;
//         if (isPossible(arr,n,c,mid))
//         {
//             ans = mid ;
//             strt = mid + 1 ;
//         }
//         else {
//             end = mid - 1 ;
//         }  
//     }
//     return ans ;
    
// }
                 
// int main() {
//     vector<int> arr = {1,2,8,4,9};
//     int c = 3 ;
//     int n = 5 ;
//     cout << cow(arr,n,c);
            
//     return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
                 
int main() {
    vector<int> arr = {2,4,5,8,7};
    int n = arr.size() ;
    int maxval = -1 ;
    for (int i = 0; i < n; i++)
    {
        maxval = max(arr[i],maxval);
    }
    cout << maxval ;
    // int ans = -1 ;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i]>arr[i-1])
    //     {
    //         ans = arr[i];
    //     }
        
    // }
    // cout << ans ;
            
    return 0;
}