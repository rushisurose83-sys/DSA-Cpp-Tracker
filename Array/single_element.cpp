// #include<iostream>
// #include<vector>
// using namespace std;

// int single(vector<int> arr){
//     int n = arr.size();
//     int strt = 0 , end = arr.size()-1;
//     if(n==1) return arr[0];
//     while (strt<=end)
//     {
//         int mid = strt + (end-strt)/2;
//         if(mid == 0 && arr[0]!=arr[1]) return arr[mid] ;
//         if(mid == n-1 && arr[n-1]!=arr[n-2]) return arr[mid] ;
//         if (arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1])
//         {
//             return arr[mid] ;
//         }
//         if (mid%2==0)
//         {
//             if (arr[mid]==arr[mid-1])
//             {
//                 end = mid -1 ;
//             }
//             else {
//                 strt = mid + 1 ;
//             }
            
//         }
//         else {
//             if (arr[mid]==arr[mid-1])
//             {
//                 strt = mid + 1 ;
//             }
//             else {
//                 end = mid - 1 ;
//             }
//         }
        
        
//     }
//     return -1 ;
    
// }
                 
// int main() {
//     vector<int> arr = {3,3,7,7,10,10};
//     cout << single(arr);     
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

int single(vector<int> arr){
    int n = arr.size();
    int strt = 0 , end = n-1 ;
    if(n==1) return arr[0] ;
    while (strt<=end)
    {
        int mid = strt + (end-strt)/2;
        if(mid == 0 && arr[0]!=arr[1]) return arr[mid];
        if(mid == n-1 && arr[n-1]!=arr[n-2]) return arr[mid]; 
        if(arr[mid]!=arr[mid-1]&& arr[mid]!= arr[mid+1]) return arr[mid];
        if (mid%2 == 0)
        {
            if (arr[mid]==arr[mid-1])
            {
                end = mid - 1 ;
            }
            else{
                strt = mid + 1;
            }   
        }
        else{
            if (arr[mid] == arr[mid+1])
            {
                end = mid - 1 ;
            }
            else{
                strt = mid + 1 ;
            }
        }
        
    }
    return -1 ;
    
}
                 
int main() {
    vector<int> arr = {1,1,2,3,3,4,4,5,5};
    cout << single(arr);    
    return 0;
}