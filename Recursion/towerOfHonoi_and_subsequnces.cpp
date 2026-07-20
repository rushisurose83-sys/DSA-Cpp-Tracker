// #include<iostream>
// using namespace std;

// void toh(int n , char a , char b , char c){
//     if(n>0){
//         toh(n-1,a,c,b);
//         cout << "from " << a << " to " << c << endl ;
//         toh(n-1,b,a,c);
//     }
// }
                 
// int main() {
//     toh(3,'a','b','c');    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int toh(int n , char a , char b , char c){
//     static int count = 0 ;
//     if(n>0){
//         toh(n-1,a,c,b);
//         count++;
//         toh(n-1,b,a,c);
//     }
//     return count ;
// }
                 
// int main() {
//     cout << toh(16,'a','b','c');    
//     return 0;
// }

// Static variable and multiple print statement

// #include<iostream>
// using namespace std;

// void count(int n){
//     static int d = 1 ;
//     cout << n ;
//     cout << d ;
//     d++;
//     if(n>1) count(n-1);
//     cout << d ;
// }
                 
// int main() {
//     count(3);      
//     return 0;
// }

// pick dont pick 

// #include<iostream>
// #include<vector>
// using namespace std;

// void solve(int i , vector<int>& backtrack , vector<int>& arr){
//     if(i >= arr.size()) {
//         for (int j = 0; j < backtrack.size(); j++)
//         {
//             cout << backtrack[j] << " " ;
//         }
//         cout << endl ;
//         return ;
        
//     }
//     // 1 . yes pick
//     backtrack.push_back(arr[i]);
//     solve(i+1,backtrack,arr);

//     // 2. backtrack undo the picking 
//     backtrack.pop_back();
    
//     // 3. dont pick now 
//     solve(i+1,backtrack,arr);

    

// }
                 
// int main() {
//     vector<int> arr = {3,2,1};
//     vector<int> backtrack ;
//     solve(0,backtrack,arr);
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> search(int i , vector<int> backtrack , vector<int> arr){
    vector<vector<int>> sol ;
    if (i >= arr.size())
    {
        sol.push_back(backtrack);
        return {backtrack};
        
    }

    backtrack.push_back(arr[i]);
    vector<vector<int>> left = search(i+1,backtrack,arr);

    backtrack.pop_back();
    vector<vector<int>> right = search(i+1,backtrack,arr);

    // merge 
    left.insert(left.end(),right.begin(),right.end());
    return left ;
    
}
                 
int main() {
    vector<int> nums = {1,2,3};
    vector<int> backtrack ;
    vector<vector<int>> ans = search(0,backtrack,nums) ;
    for(auto vec : ans){
        for(auto val : vec){
                cout << val << " ";
        }
        cout << endl ;
    }
    return 0;
}