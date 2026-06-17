#include<iostream>
#include<vector>
using namespace std;

int top(vector<int> arr){
    int strt = 1 , end = arr.size()-2 ;
    while (strt <= end)
    {
        int mid = strt + (end - strt)/2;
        if (arr[mid-1]<arr[mid] && arr[mid] > arr[mid+1])
        {
            return mid ;
        }
        if (arr[mid]>arr[mid-1])
        {
            strt = mid + 1 ;
        }
        else{
            end = mid - 1 ;
        }
        
        
    }
    return -1 ;
    
}
                 
int main() {
    vector<int> arr = {0,3,8,9,5,2};
    cout << top(arr);
    return 0;
}