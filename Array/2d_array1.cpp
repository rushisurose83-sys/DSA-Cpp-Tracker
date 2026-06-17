// #include<iostream>
// using namespace std;
                 
// int main() {
//     int mat[4][3];
//     int row=4,col=3;
//     // input of 2d array
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> mat[i][j] ;
//         }
//     }
//     // output of 2d array
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cout << mat[i][j] << " ";
//         }
//         cout << endl; 
//     }
    
//     return 0;
// }

// liear search
// #include<iostream>
// using namespace std;

// pair<int,int> search(int mat[4][3],int row,int col,int key){
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (mat[i][j]==key)
//             {
//                 return pair<int,int>(i,j);
//             }
            
//         }
        
//     }
//     return pair<int,int>(-1,-1);
// }
                 
// int main() {
//     int mat[4][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9},
//         {10,11,12}
//     };
//     int row=4,col=3;
//     int key = 5;
//     pair<int,int> result = search(mat,row,col,key);
//     cout << "Element found at:" << result.first << "," << result.second << endl;        
//     return 0;
// }

// max row sum
// #include<iostream>
// #include<climits>
// using namespace std;

// int getSum(int mat[][3] , int row , int col){
//     int maxSum = INT_MIN;
//     for (int i = 0; i < row; i++)
//     {
//         int rowSum=0;
//         for (int j = 0; j < col; j++)
//         {
//             rowSum += mat[i][j];
//         }
//         maxSum = max(maxSum,rowSum);
//     }
//     return maxSum;
// }
                 
// int main() {
//     int mat[4][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9},
//         {10,11,12}
//     };   
//     int row=4,col=3;
//     cout << getSum(mat,row,col);     
//     return 0;
// }

// max col sum
// #include<iostream>
// #include<climits>
// using namespace std;

// int colSum(int mat[][3] , int row , int col){
//     int maxSum = INT_MIN;
//     for (int j = 0; j < col; j++)
//     {
//         int colSum=0;
//         for (int i = 0; i < row; i++)
//         {
//             colSum += mat[i][j];
//         }
//         maxSum = max(maxSum,colSum);
//     }
//     return maxSum;
// }
                 
// int main() {
//     int mat[4][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9},
//         {10,11,12}
//     };
//     int row=4,col=3;
//     cout << colSum(mat,row,col);        
//     return 0;
// }

// Diagonal sum
// #include<iostream>
// using namespace std;

// int digSum(int mat[][3] , int row , int col){
//     int pdSum = 0;
//     int sdSum = 0;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (i==j)
//             {
//                 pdSum += mat[i][j];
//             } 
//             else if (j == col-1-i)
//             {
//                 sdSum += mat[i][j];
//             }
            
//         }
        
//     }
//     return pdSum+sdSum;
// }
                 
// int main() {
//     int mat[3][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int row=3,col=3;
//     cout << digSum(mat,row,col);      
//     return 0;
// }

// optimized diagonal sum
// #include<iostream>
// using namespace std;

// int digSum(int mat[][3] , int row , int col){
//     int sum = 0;
//     for (int i = 0; i < row; i++)
//     {
//         sum += mat[i][i];
//         if (i != col-i-1)
//         {
//             sum += mat[i][col-i-1];
//         }
//     }
//     return sum;
// }
                 
// int main() {
//     int mat[3][3]={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     int row=3,col=3;
//     cout << digSum(mat,row,col);      
//     return 0;
// }

// 2d vector
#include<iostream>
#include<vector>
using namespace std;
                 
int main() {
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    // row = mat.size();
    // col = mat[i].size();
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
         
    return 0;
}