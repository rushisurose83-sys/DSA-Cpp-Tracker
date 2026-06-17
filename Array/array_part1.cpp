// #include<iostream>
// using namespace std;
                 
// int main() {
//     int marks[5] = {99,98,96,94,88} ;
//     // cout << marks[3] << endl ;  
//     // cout << marks[-1] << endl ;// garbage as it is not in index
//     cout << sizeof(marks)/ sizeof(int) << endl ;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << marks[i] << endl;
//     }
         
//     return 0;
// }

// #include<iostream>
// using namespace std;
                 
// int main() {
//     int marks[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> marks[i] ;
//     }
//     cout << "Array : " ;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << marks[i] << endl;
//     }
         
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
                 
// int main() {
//     int arr[ ] = {5,15,22,1,-15,24} ;
//     int size = sizeof(arr)/sizeof(int);
//     int smallest = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//        if (arr[i] < smallest )
//        {
//         smallest = arr[i];
//        }
       
//     }
//     cout << smallest ;
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
                 
// int main() {
//     cout << "Hello" << endl ;        
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
                 
// int main() {
//     int num[] = {23,24,25,28,89} ;
//     int size = sizeof(num)/sizeof(int);
//     int largest = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if (num[i]>largest)
//         {
//             largest = num[i];
//         }
//     }
//      cout << largest << endl ;
           
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
                 
// int main() {
//     int num[] = {23,24,25,28,89} ;
//     int size = sizeof(num)/sizeof(int);
//     int largest = INT_MIN;
//     int index = 0 ;
//     for (int i = 0; i < size; i++)
//     {
//         if (num[i]>largest)
//         {
//             largest = num[i];
//             index = i;
//         }
//     }
//      cout << largest << endl ;
//      cout << index << endl ;
           
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;
                 
// int main() {
//     int arr[ ] = {5,15,22,1,-15,24} ;
//     int size = sizeof(arr)/sizeof(int);
//     int smallest = INT_MAX;
//     int index = 0 ;
//     for (int i = 0; i < size; i++)
//     {
//        if (arr[i] < smallest )
//        {
//         smallest = arr[i];
//         index = i;
//        }
       
//     }
//     cout << smallest << endl ;
//     cout << index << endl ;
    
//     return 0;
// }

//  pass by refrence 


// #include<iostream>
// using namespace std;

// void changeArr(int arr[],int size){
//     cout << "in function \n";
//     for (int i = 0; i < size; i++)
//     {
//         arr[i]=2*arr[i];
//     }  
// }
                 
// int main() {
//     int arr[] = {1,2,3};
//     changeArr(arr,3);
//     cout << "in main function : \n"; 
//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i] << endl ;
//     }
           
//     return 0;
// }

//  linear search 

// #include<iostream>
// using namespace std;
                 
// int main() {
//     int arr[] = {4,2,7,8,1,2,5};
//     int size = sizeof(arr)/sizeof(int);
//     int index = 0;
//     int found = 0;
//     int target ;
//     cout << "enter num : " ;
//     cin >> target ;
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i]==target){
//             index = i ;
//             found = 1;
//             break ;
//         }
//     }
//     if (found == 1)
//     {
//         cout << "Found at " << index << endl ;
//     }
//     else
//     cout << "-1" << endl ;
           
//     return 0;
// }


// linear search by fn

// #include<iostream>
// using namespace std;

// int linSearch(int arr[],int size , int target ){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]==target)
//         {
//             return i;
//         }   
//     }
//     return -1;
// }
                 
// int main() {
//     int arr[] = {4,2,7,8,1,2,5};
//     int size = sizeof(arr)/sizeof(int);
//     int n ;
//     cout << "enter num to find in array : ";
//     cin >> n ;
//     cout << linSearch(arr,size,n);     
//     return 0;
// }

// REVERSE OF AN ARRAY

// #include<iostream>
// using namespace std;

// void reverseArray(int arr[],int size){
//     int start = 0 , end = size - 1 ;
//     while (start < end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }     
// }
                 
// int main() {
//     int arr[] = {4,2,7,8,1,2,5};
//     int size = 7 ;
//     reverseArray(arr,size);

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " " ;
//     }     
//     return 0;
// }

// HW
// sum and product of num 

// #include<iostream>
// using namespace std;

// int sum(int arr[] , int size){
//     int sum = 0 ;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     return sum ;
// }
                 
// int main() {
//     int arr[] = {1,2,3,4,5,6,7,8,9} ;
//     cout << sum(arr , 9);      
//     return 0;
// }

// product of all num in array

// #include<iostream>
// using namespace std;

// int product(int arr[] , int size){
//     int product = 1 ;
//     for (int i = 0; i < size; i++)
//     {
//         product *= arr[i];
//     }
//     return product ;
// }
                 
// int main() {
//     int arr[] = {1,2,3,4,5} ;
//     cout << product(arr , 5);   
//     return 0;
// }

//  swap max n min num 

// #include<iostream>
// #include<climits>
// using namespace std;

// void swapMaxMin(int arr[] , int size){
//     int minIndex = 0 ;
//     int maxIndex = 0 ;
//     int smallest = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]<smallest)
//         {
//             smallest = arr[i];
//             minIndex = i;
//         }   
//     }
//     int largest = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]>largest)
//         {
//             largest = arr[i];
//             maxIndex = i ;
//         }   
//     }
//     swap(arr[minIndex],arr[maxIndex]) ;   
// }
                 
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(int) ;
//     cout << "OG array : " << endl ;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " " ;
//     }
//     swapMaxMin(arr,size) ;
//     cout << "\n" << "swapped array is : " << endl ;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " " ;
//     }      
//     return 0;
// }

// #include<iostream>
// #include<climits>
// using namespace std;

// int swapMax(int arr[] , int size){
//      int largest = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]>largest)
//         {
//             largest = arr[i];
//         }   
//     }
//     return largest ;
// }
                 
// int main() {
//     int arr[] = {1,2,3,4,5};
//     cout << swapMax(arr,5);       
//     return 0;
// }

// unique val in arr

// #include<iostream>
// using namespace std;

// int unique(int arr[],int size){
//     int result = 0;
//     for (int i = 0; i < size; i++)
//     {
//         result^=arr[i]  ; 
//     }
//     return result ;
    
// }
                 
// int main() {
//     int arr[] = {1,2,3,1,2,3,4};
//     cout << unique(arr,7);       
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void intersection(int arr1[],int size1 , int arr2[],int size2){
//     int result = 0;
//     for (int i = 0; i < size1; i++)
//     {
//        for (int j = 0; j < size2; j++)
//        {
//         if (arr1[i]==arr2[j])
//         {
//             cout << arr1[i] << " " ;
//             break;
//         }
        
//        }
       
//     }
    
// }
                 
// int main() {
//     int arr1[] = {1,2,3,4} ;
//     int arr2[] = {3,4,5,6} ;
//     intersection(arr1,4,arr2,4);        
//     return 0;
// }

// linear search 
// #include<iostream>
// using namespace std;

// int search(int arr[],int n , int target){
//     int found = -1 ;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]==target){
//             found = i ;
//             break ;
//         }
//     }
//     return found ;
    
// }
                 
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int target = 5 ;
//     int n = sizeof(arr)/sizeof(int);
//     cout << search(arr,n,target);     
//     return 0;
// }

// reverse array
// #include<iostream>
// using namespace std;

// void reverse(int arr[],int n){
//     int strt = 0 , end = n-1 ;
//     while (strt<=end)
//     {
//         swap(arr[strt],arr[end]);
//         strt++;
//         end--;
//     }   
// }
// void printArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " ;
//     }
    
// }
                 
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     reverse(arr,n);
//     printArray(arr,n) ;       
//     return 0;
// }

// swap max n min
// #include<iostream>
// #include<climits>
// using namespace std;

// void swaped(int arr[],int n){
//     int idx1 = 0 , idx2 = 0 ;
//     int small = INT_MAX ;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]<small)
//         {
//             small = arr[i];
//             idx1 = i ;
//         }
        
//     }
//     int max = INT_MIN ;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>max)
//         {
//             max = arr[i];
//             idx2 = i ;
//         }
        
//     }
//     swap(arr[idx1],arr[idx2]);
    
    
// }

// void printArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " ;
//     }
    
// }
                 
// int main() {
//     int arr[] = {1,2,3,4,5};  
//     int n = sizeof(arr)/sizeof(int);
//     swaped(arr,n);
//     printArray(arr,n);      
//     return 0;
// }

// unique val in arr

// #include<iostream>
// #include<vector>
// using namespace std;

// int unique(vector<int> arr , int n){
//     int result = 0 ;
//     for (int i = 0; i < n; i++)
//     {
//         result ^= arr[i];
//     }
//     return result ;
    
// }
                 
// int main() {
//     vector<int> arr = {1,1,2,2,4,5,5};
//     int n = arr.size();
//     cout << unique(arr,n) ;       
//     return 0;
// }