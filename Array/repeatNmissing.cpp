// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;

// vector<int> findMissingAndDuplicate(vector<vector<int>>& nums) {
//     // DUPLICATE NUMBER
//     int n = nums.size();
//     vector<int> ans;
//     int a , b ;
//     unordered_set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (s.find(nums[i][j])!=s.end())
//             {
//                 a = nums[i][j];
//                 ans.push_back(a);
//             }
//             s.insert(nums[i][j]);
//         }
        
//     }
// // MISING NUMBER
//     int sum = 0;
//     int expSum = (n*n)*((n*n)+1)/2;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             sum+=nums[i][j];
//         }
        
//     }
//     b = expSum+a-sum;
//     ans.push_back(b);
//     return ans ; 
// }
                 
// int main() {
//     vector<vector<int>> nums = {{9,1,7},{8,9,2},{3,4,6}};
//     vector<int> result = findMissingAndDuplicate(nums);
//     cout << "Duplicate: " << result[0] << endl;
//     cout << "Missing: " << result[1] << endl;      
//     return 0;
// }

// find duplicates
// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;

// int duplicate(vector<int>& arr){
//     int n = arr.size();
//     int a ;
//     unordered_set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         if (s.find(arr[i])!=s.end())
//         {
//             a = arr[i];
//         }
//         s.insert(arr[i]);
//     }
//     return a ;
    
// }
                 
// int main() {
//     vector<int> arr = {3,1,3,4,2};
//     cout << "Duplicate : " << duplicate(arr) << endl;        
//     return 0;
// }

// linked list cycle
// #include<iostream>
// #include<vector>
// using namespace std;

// int duplicate(vector<int>& arr){
//     int n = arr.size();
//     int slow = arr[0];
//     int fast = arr[0];
//     do {
//         slow = arr[slow];
//         fast = arr[arr[fast]];
//     } while(slow!=fast);

//     slow = arr[0];
//     while (slow!=fast)
//     {
//         slow = arr[slow];
//         fast = arr[fast];
//     }
//     return slow ;
    
// }
                 
// int main() {
//     vector<int> arr = {3,1,3,4,2};
//     cout << "Duplicate : " << duplicate(arr) << endl;       
//     return 0;
// }

// Repeated val 
// #include<iostream>
// #include<vector>
// #include<unordered_set>
// using namespace std;

// int repeating(vector<vector<int>>& vec){
//     unordered_set<int> s ;
//     int a = -1 ;
//     int n = vec.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             int num = vec[i][j];
//             if (s.find(num)!=s.end())
//             {
//                 return num ;
//             }
//             s.insert(num);
//         }
        
        
//     }
//     return -1 ;
    
// }
                 
// int main() {
//     vector<vector<int>> vec = {{9,1,7},{8,9,2},{3,4,5}};  
//     cout << repeating(vec) << endl;
//     return 0;
// }

// Missing 

// #include<iostream>
// #include<vector>
// using namespace std;

// int missing(vector<vector<int>>& vec){
//     int n = vec.size();
//     int t_sum = (n*n)*((n*n)+1)/2;
//     int g_sum = 0 ;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             g_sum += vec[i][j];
//         }
        
//     }
//     return (9+t_sum - g_sum) ; // a=9
    
// }
                 
// int main() {
//     vector<vector<int>> vec = {{9,1,7},{8,9,2},{3,4,6}}; 
//     cout << missing(vec);       
//     return 0;
// }

// Repeat and missing

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> repeatNmissing(vector<vector<int>>& vec){
    int a , b;
    int n = vec.size();
    int t_sum = (n*n)*((n*n)+1)/2;
    int g_sum = 0 ;
    unordered_set<int> s ;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (s.find(vec[i][j]) != s.end())
            {
                a = vec[i][j];
            }
            else{
            s.insert(vec[i][j]);
            g_sum += vec[i][j];
            }
            
        }
        
    }
    b = t_sum-g_sum;
    return {a,b};
}
                 
int main() {
    vector<vector<int>> vec = {{9,1,7},{8,9,2},{3,4,5}};
    vector<int> ans = repeatNmissing(vec);
    for(int val : ans){
        cout << val << " " ;
    }      
    return 0;
}