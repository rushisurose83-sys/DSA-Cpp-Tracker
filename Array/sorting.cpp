// bubble sort

// #include<iostream>
// using namespace std;

// void bubbleSort(int arr[] , int n ){
//     bool isSwap = false ;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//                 isSwap = true ;
//             }

//         }
//         if (!isSwap)
//         {
//             return ;
//         }

//     }

// }

// int main() {
//     int arr [] = {4,1,5,2,3};
//     int n = sizeof(arr)/sizeof(int);
//     bubbleSort(arr,n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " ;
//     }

//     return 0;
// }

// selection Sort

// #include<iostream>
// using namespace std;

// void selSort(int arr[],int n){
//     for (int i = 0; i < n-1; i++)
//     {
//         int smallestIdx = i ;
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[j]<arr[smallestIdx])
//             {
//                 smallestIdx = j ;
//             }

//         }
//         swap(arr[i],arr[smallestIdx]);

//     }

// }

// void printArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " ;
//     }

// }

// int main() {
//     int arr[] = {4,1,5,2,3};
//     int n = 5 ;
//     selSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }

// insertion sort

// #include <iostream>
// using namespace std;

// void inSort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int curr = arr[i];
//         int prev = i - 1;
//         while (prev>=0 && arr[prev]>curr)
//         {
//             arr[prev+1] = arr[prev];
//             prev -- ;
//         }
//         arr[prev+1] = curr ;
        
//     }
// }

// void printArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " ;
//     }

// }

// int main()
// {
//     int arr[] = {4, 1, 5, 2, 3};
//     int n = 5;
//     inSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }

// bubble sort
// #include<iostream>
// using namespace std;

// void bubbleSort(int arr[] , int n){
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = 0; j < n-i-1; j++)
//         {
//             if (arr[j+1]<arr[j])
//             {
//                 swap(arr[j],arr[j+1]);
//             }
            
//         }
        
//     }
    
// }

// void printArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " ;
//     }
    
// }
                 
// int main() {
//     int arr[] = {4,1,5,2,3};
//     int n = 5 ;     
//     bubbleSort(arr,n);   
//     printArray(arr,n);
//     return 0;
// }

// selection sort

// #include<iostream>
// using namespace std;

// void selectionSort(int arr[],int n){
//     for (int i = 0; i < n-1; i++)
//     {
//         int smallestIdx = i ;
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[smallestIdx]>arr[j])
//             {
//                 smallestIdx = j;
//             }
            
//         }
//         swap(arr[smallestIdx],arr[i]);
        
//     }
    
// }

// void printArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " ;
//     }
    
// }
                 
// int main() {
//     int arr[] = {4,1,5,2,3};
//     int n = 5 ;  
//     selectionSort(arr,n);
//     printArray(arr,n);      
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void selectionSort(int arr[],int n){
//     for (int i = 0; i < n-1; i++)
//     {
//         int smallestIdx = i ;
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[smallestIdx]<arr[j])
//             {
//                 smallestIdx = j;
//             }
            
//         }
//         swap(arr[smallestIdx],arr[i]);
        
//     }
    
// }

// void printArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " ;
//     }
    
// }
                 
// int main() {
//     int arr[] = {4,1,5,2,3};
//     int n = 5 ;  
//     selectionSort(arr,n);
//     printArray(arr,n);      
//     return 0;
// }

// Insertion sort 

// #include<iostream>
// using namespace std;

// void insertionSort(int arr[] , int n){
//     for (int i = 1; i < n; i++)
//     {
//         int current = arr[i];
//         int prev = i-1;
//         while (prev>=0 && arr[prev] > current)
//         {
//             arr[prev+1] = arr[prev];
//             prev -- ;
//         }
//         arr[prev+1] = current ;
        
//     }
    
// }

// void printArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " " ;
//     }
    
// }
               
// int main() {
//     int arr[] = {4,1,5,2,3};
//     int n = 5 ;
//     insertionSort(arr,n);
//     printArray(arr,n);        
//     return 0;
// }

#include<iostream>
using namespace std;

void insertionSort(int arr[] , int n){
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int prev = i-1;
        while (prev>=0 && arr[prev] > current)
        {
            arr[prev+1] = arr[prev];
            prev -- ;
        }
        arr[prev+1] = current ;
        
    }
    
}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    
}
               
int main() {
    int arr[] = {4,1,5,2,3};
    int n = 5 ;
    insertionSort(arr,n);
    printArray(arr,n);        
    return 0;
}