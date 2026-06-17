// // 2d array search
// #include<iostream>
// #include<vector>
// using namespace std;

// bool SearchInRow(vector<vector<int>>& mat,int target,int row){
//     int n = mat[0].size();
//     int start = 0 , end = n-1;
//     while (start<=end)
//     {
//         int mid = start+(end-start)/2;
//         if (mat[row][mid]==target)
//         {
//             return true;
//         }
//         else if (mat[row][mid] <= target){
//             start = mid+1;
//         }
//         else{
//             end = mid-1;
//         }
        
//     }
//     return false;
    
// }

// bool searchMat(vector<vector<int>>& mat , int target){
//     int m = mat.size() , n = mat[0].size();
//     int startRow = 0 , endRow = m-1;
//     while (startRow<=endRow)
//     {
//         int midRow = startRow + (endRow-startRow)/2;
//         if(target>=mat[midRow][0] && target <= mat[midRow][n-1]){
//             //  found the answer
//             return SearchInRow(mat,target,midRow);
//         }
//         else if (target >= mat[midRow][n-1])
//         {
//             startRow = midRow+1;
//         }
//         else{
//             endRow = midRow-1;
//         }
        
//     }
//     return false ;
     
// }
                
// int main() {
//     vector<vector<int>> mat = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//     int target = 13;
//     cout << "Target " << target << endl;
//     if (searchMat(mat, target))
//     {
//         cout << "Target Found" << endl;
//     }
//     else {
//         cout << "Target Not Found" << endl;
//     }

//     return 0;
// }

// Search in 2d array
#include<iostream>
#include<vector>
using namespace std;

bool searchMat(vector<vector<int>> mat,int target){
    int m = mat.size() , n = mat[0].size();
    int r = 0 , c = n-1;
    while (c>=0 && r < m)
    {
        if (target == mat[r][c])
        {
            return true;
        }
        else if (target < mat[r][c])
        {
            c--;
        }
        else{
            r++;
        } 
        
    }
    return false;
    
}
                 
int main() {
    vector<vector<int>> mat = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target = 20;
    cout << "Target " << target << endl;
    if (searchMat(mat, target))
    {
        cout << "Target Found" << endl;
    }
    else {
        cout << "Target Not Found" << endl;
    }        
    return 0;
}