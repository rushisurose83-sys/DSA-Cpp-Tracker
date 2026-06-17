#include<iostream>
#include<vector>
using namespace std;

int binSearch(vector<int> arr , int target){
    int n = arr.size();
    int strt = 0 , end = n-1 ;
    while (strt<=end)
    {
        int mid = strt+(end-strt)/2 ;
        if (arr[mid]<target)
        {
            strt = mid+1 ;
        }
        else if (arr[mid]>target)
        {
            end = mid-1 ;
        }
        else {
            return mid ;
        }
        
    }
    return -1 ;
}
                 
int main() { 
    vector<int> arr1 = {-1,0,3,4,5,9,12};
    int tar1 = 12 ;
    cout << binSearch(arr1,tar1) << endl;
    vector<int> arr2 = {-1,0,3,5,9,12}; 
    int tar2 = 10 ;
    cout << binSearch(arr2,tar2) << endl;      
    return 0;
}