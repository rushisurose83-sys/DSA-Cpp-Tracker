// #include<iostream>
// #include<vector>
// #include<utility>
// using namespace std;

// pair<int,int> pairsum(vector<int>& arr, int tar){
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0 ;
//         for (int j = i+1; j < n; j++)
//         {
//             sum = arr[i]+arr[j];
//             if (sum==tar)
//             {
//                 return pair<int,int>(i,j);
//             }
            
//         }
        
//     }
//     return pair<int,int>(-1,-1);
    
// }
                 
// int main() {
//     vector<int> arr = {5,2,11,7,15};
//     int tar = 9 ;
//     pair<int,int> result = pairsum(arr, tar);
//     cout << result.first << " " << result.second;
//     return 0;
// }

// better
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// pair<int,int> pairSum(vector<int>& arr,int tar){
//     int n = arr.size();
//     int i = 0 , j = n-1;
//     sort(arr.begin(),arr.end());
//     while (i<j)
//     {
//         int sum = arr[i]+arr[j];
//         if (sum>tar)
//         {
//             j--;
//         }
//         else if(sum<tar){
//             i++;
//         }
//         else{
//             return pair<int,int>(i,j);
//         }
        

//     }
//     return pair<int,int>(-1,-1);
    

// }
                 
// int main() {
//     vector<int> arr = {5,2,11,7,15};
//     int tar = 9 ;
//     pair<int,int> result = pairSum(arr,tar);
//     cout << result.first << " " << result.second << endl;       
//     return 0;
// }

// optimized
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// vector<int> twoSum(vector<int>& arr,int tar){
//     unordered_map<int,int>m;
//     vector<int> ans ;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         int first = arr[i];
//         int sec = tar-first;
//         if (m.find(sec)!=m.end())
//         {
//             ans.push_back(i);
//             ans.push_back(m[sec]);
//             break;
//         }
//         m[first]=i;
        
//     }
//     return ans;
    

// }


                 
// int main() {
//     vector<int> arr = {5,2,11,7,15};
//     int tar = 9 ;   
//     vector<int> ans = twoSum(arr,tar);
//     for(int val:ans){
//         cout << val << " " ;
//     }  
//     return 0;
// }

// Rev 
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> twoSum(vector<int> vec , int target){
//     vector<int> ans;
//     int n = vec.size();
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0 ;
//         for (int j = i+1; j < n ; j++)
//         {
//             sum = vec[i] + vec[j] ;
//             if (sum == target)
//             {
//                 ans.push_back(vec[i]);
//                 ans.push_back(vec[j]);
//                 return ans ;
//             }
            
//         }
        
//     }
//     return {-1,-1} ;
    
// }
                 
// int main() {
//     vector<int> vec = {3,4,5,11,13};
//     int target = 4 ;
//     vector<int> ans = twoSum(vec,target);
//     for(int val : ans){
//         cout << val << " " ;
//     }       
//     return 0;
// }

// Bruitforce Done
// #include<iostream>
// #include<vector>
// using namespace std;

// pair<int,int> twoSum(vector<int> vec , int target){
//     int n = vec.size();
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0 ;
//         for (int j = i+1; j < n ; j++)
//         {
//             sum = vec[i] + vec[j] ;
//             if (sum == target)
//             {
//                 return pair<int,int> (i,j);
//             }
            
//         }
        
//     }
//     return pair<int,int>(-1,-1) ;
    
// }
                 
// int main() {
//     vector<int> vec = {3,4,5,11,13};
//     int target = 4 ;
//     pair<int,int> ans = twoSum(vec,target);
//     cout << ans.first << " " << ans.second ;      
//     return 0;
// }

// Better
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// vector<int> twoSum(vector<int> vec , int target){
//     int smallest = 0 , largest = vec.size()-1;
//     sort(vec.begin(),vec.end());
//     while (smallest<largest)
//     {
//         int sum = vec[smallest]+vec[largest];
//         if (target>sum)
//         {
//             smallest++;
//         }
//         else if (target<sum)
//         {
//             largest--;
//         }
        
//         else {
//             return {smallest,largest};
//         }
        
//     }
//     return {-1,-1};
    
// }
                 
// int main() {
//     vector<int> vec = {5,2,11,7,15};
//     int target = 12 ; 
//     vector<int> ans = twoSum(vec,target);
//     for(int val : ans){
//         cout << val << " " ;
//     }   
//     return 0;
// }

// // Optimized
// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// vector<int> twoSum(vector<int> vec , int target){
//     unordered_map<int,int> m ;
//     int n = vec.size();
//     for (int i = 0; i < n; i++)
//     {
//         int first = vec[i] ;
//         int sec = target-first;
//         if (m.find(sec)!=m.end())
//         {
//             return {i,m[sec]};
//         }
//         m[first] = i ;
        
//     }
//     return {-1,-1};
    
// }
                 
// int main() {
//     vector<int> vec = {5,2,11,7,15};
//     int target = 12 ; 
//     vector<int> ans = twoSum(vec,target);
//     for(int val : ans){
//         cout << val << " " ;
//     }           
//     return 0;
// }