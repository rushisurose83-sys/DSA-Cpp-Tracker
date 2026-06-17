#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> arr , int n , int m, int maxAllowedTime){
    int painter = 1 , time = 0 ;
    for (int i = 0; i < n ; i++)
    {
        if (time+arr[i]<=maxAllowedTime)
        {
            time += arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
        
    }
    return painter <= m ;
    
}

int painter(vector<int> arr , int n , int m){
    int ans = -1 ;
    int strt = 0 ;
    for (int i = 0; i < n; i++)
    {
        strt = max(arr[i],strt);  
    }
    int end ;
    for (int i = 0; i < n; i++)
    {
        end += arr[i];
    }
    while (strt<=end)
    {
        int mid = strt + (end-strt)/2;
        if (isValid(arr,n,m,mid))
        {
            end = mid - 1 ;
            ans = mid ;
        }
        else {
            strt = mid + 1 ;
        }
        
    }
    return ans ;
    
}
                 
int main() {
    vector<int> arr = {40,30,10,20};
    int n = 4 , m = 2 ;
    cout << painter(arr,n,m);     
    return 0;
}