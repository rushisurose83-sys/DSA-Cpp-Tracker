// // spiral matrix
// #include <iostream>
// #include <vector>
// using namespace std;

// void spiralMat(vector<vector<int>> &mat)
// {
//     int srow = 0, erow = mat.size() - 1;
//     int scol = 0, ecol = mat[0].size() - 1;

//     while (srow <= erow && scol <= ecol)
//     {
//         // TOP Boundry
//         for (int j = scol; j <= ecol; j++)
//         {
//             cout << mat[srow][j] << " ";
//         }
//         // Right boundry
//         for (int i = srow + 1; i <= erow; i++)
//         {
//             cout << mat[i][ecol] << " ";
//         }
//         // bottom boundry
//         for (int j = ecol - 1; j >= scol; j--)
//         {
//             if (srow == erow)
//             {
//                 break;
//             }

//             cout << mat[erow][j] << " ";
//         }
//         // left boundry
//         for (int i = erow - 1; i >= srow + 1; i--)
//         {
//             if (scol == ecol)
//             {
//                 break;
//             }

//             cout << mat[i][scol] << " ";
//         }
//         srow++;
//         erow--;
//         scol++;
//         ecol--;
//     }
// }

// int main()
// {
//     vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     spiralMat(mat);
//     return 0;
// }

// Search in 2d array
#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralMat(vector<vector<int>> mat){
    int m = mat.size() , n = mat[0].size();
    int srow = 0 , erow = m-1;
    int scol = 0 , ecol = n-1;
    vector<int> ans ;
    while (srow<=erow && scol<=ecol)
    {
        for (int j = scol; j <= ecol; j++)
        {
            if (srow==erow)
            {
                break;
            }
            
            ans.push_back(mat[srow][j]);
        }
        for (int i = srow+1; i <= erow; i++)
        {
            ans.push_back(mat[i][ecol]);
        }
        for (int j = ecol-1; j >= scol; j--)
        {
            ans.push_back(mat[erow][j]);
        }
        for (int i = erow-1; i >= srow+1; i--)
        {
            if (scol==ecol)
            {
                break;
            }
            
            ans.push_back(mat[i][scol]);
        }
        srow++;erow--;
        scol++;ecol--;
    }
    return ans ;
    
}

void printArray(vector<int>& ans){
    int n = ans.size();
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    
}
                 
int main() {
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};  
    vector<int> ans = spiralMat(mat);
    printArray(ans);      
    return 0;
}