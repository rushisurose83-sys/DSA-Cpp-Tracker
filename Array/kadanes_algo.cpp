// #include<iostream>
// using namespace std;
                 
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = 5;
//     for (int start = 0; start < size; start++)
//     {
//         for (int end = start; end < size; end++)
//         {
//             for (int i = start; i <=end ; i++)
//             {
//                 cout << arr[i] ;
//             }
//             cout << " ";
//         }
//         cout << "\n";
        
//     }
            
//     return 0;
// }

// max of subarray 

// #include<iostream>
// #include<climits>
// using namespace std;
                 
// int main() {
//     int n = 5 ;
//     int arr[n] = {1,2,3,4,5};
//     int maxSum = INT_MIN ;
//     for (int st = 0; st < n; st++)
//     {
//         int currSum = 0 ;
//         for (int end = st; end < n; end++)
//         {
//             currSum += arr[end];
//             maxSum = max(currSum,maxSum);
//         }
        
//     }
//     cout << "Max sub array sum : " << maxSum << endl ;
    
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
                 
// int main() {
//     int n = 5 ;
//     int arr[5] = {1,2,3,4,5};  
//     int maxSum = INT_MIN ;
//     int currSum = 0; 
//     for (int i = 0; i < n; i++)
//     {
//         currSum += arr[i];
//         maxSum = max(currSum , maxSum);
//         if (currSum < 0)
//         {
//             currSum = 0;
//         }
        
//     }
//     cout << "Sum = " << maxSum ;
    
//     return 0;
// }

//  max subarray sum 
// #include<iostream>
// #include<climits>
// using namespace std;
                 
// int main() {
//     int nums[] = {1,2,3,4,5,-1,-2};
//     int size = sizeof(nums)/sizeof(int);
//     int currSum = 0;
//     int maxSum = INT_MIN ; 
//     for (int i = 0; i < size; i++)
//     {
//         currSum += nums[i];
//         maxSum = max(maxSum,currSum);
//         if (currSum < 0)
//         {
//             currSum = 0 ;
//         }
        
//     }
//     cout << maxSum << endl ;
           
//     return 0;
// }


// sub-array

// #include<iostream>
// #include<vector>
// using namespace std;

// void subArray(vector<int> arr ){
//     int n = arr.size() ;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             cout << arr[j] << " " ;
//         }
//         cout << endl ;
        
//     }
    
// }
                 
// int main() {
//     vector<int> arr = {1,2,3,4,5};
//     subArray(arr); 
//     return 0;
// }

// mAx_sum 

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// void maxSum(vector<int> arr){
//     int maxSum = INT_MIN ;
//     int n = arr.size();
//     int k = -1 ;
//     for (int i = 0; i < n; i++)
//     {
//         int currSum = 0 ;
//         for (int j = i; j < n; j++)
//         {
//             currSum += arr[j];
//             if(currSum > maxSum){
//                 k = i+1 ;
//             }
//             maxSum = max(currSum,maxSum);
//         }
        
//     }
//     cout << "MAX sum is :" << maxSum << endl ;
    
// }
                 
// int main() {
//     vector<int> arr = {-1,-2,3,4,-5};
//     maxSum(arr);        
//     return 0;
// }

// kadan's algo

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// void maxSum(vector<int> arr){
//     int currSum = 0 ;
//     int maxSum = INT_MIN ;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         currSum += arr[i] ;
//         maxSum = max(maxSum,currSum);
//         if (currSum<0)
//         {
//             currSum = 0 ;
//         }
        
//     }
//     cout << maxSum << endl ;
    
// }
                 
// int main() {
//     vector<int> arr = {-1,-2,3,4,-5};
//     maxSum(arr);      
//     return 0;
// }