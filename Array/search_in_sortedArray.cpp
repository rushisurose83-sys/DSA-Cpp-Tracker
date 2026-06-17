// #include<iostream>
// #include<vector>
// using namespace std;

// int search(vector<int> arr , int target){
//     int n = arr.size();
//     int st = 0 , end = n-1 ;
//     while (st<=end)
//     {
//         int mid = st + (end-st)/2 ;
//         if(arr[mid] == target){
//             return mid ;
//         }
//         if (arr[st]<=arr[mid]) // left half sorted
//         {
//             if (arr[st]<=target && target <= arr[mid])
//             {
//                 end = mid - 1 ;
//             }
//             else{       // jump in right half of that array
//                 st = mid + 1 ;
//             }
            
//         }
//         else {
//             if (arr[mid] <= target && target <= arr[mid]) // right half sorted
//             {
//                st = mid + 1 ; 
//             }
//             else { // jump in left half of that array
//                 end = mid - 1 ;
//             }
            
//         }
        
//     }
//     return -1 ;
    
// }
                 
// int main() {
//     vector<int> arr = {3,4,5,7,0,1,2} ;
//     int target = 0 ;
//     cout << search(arr,target);     
//     return 0;
// }

// REV
// #include<iostream>
// #include<vector>
// using namespace std;

// int search(vector<int> arr , int target){
//     int strt = 0 , end = arr.size()-1 ;
//     while (strt<=end)
//     {
//         int mid = strt + (end-strt)/2;
//         if (arr[mid] == target)
//         {
//             return mid ;
//         }
//         if (arr[strt]<=arr[mid])
//         {
//             if (arr[strt]<=target && arr[mid]>=target)
//             {
//                 end = mid - 1;
//             }
//             else{
//                 strt = mid + 1 ;
//             }
            
//         }
//         else{
//             if (arr[mid]<= target && target <= arr[end])
//             {
//                 strt = mid + 1;
//             }
//             else{
//                 end = mid - 1;
//             }   

//         }
        
        
//     }
//     return -1 ;
    
// }
                 
// int main() {
//     vector<int> arr = {6,7,0,1,2,3,4,5};
//     int target = 0 ;
//     cout << search(arr,target);
//     return 0;
// }