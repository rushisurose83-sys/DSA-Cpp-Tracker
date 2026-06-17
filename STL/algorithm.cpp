// Sorting
// #include <iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main()
// {
// //     vector<int> arr = {3,5,4,2,1};
// //     sort(arr.begin(),arr.end());
// //     sort(arr.begin(),arr.end(),greater<int>());
// //     for(int val : arr){
// //         cout << val << " " ;
// //     }
//     vector<pair<int,int>> vec = {{1,2},{3,4},{4,5},{2,3}};
//     sort(vec.begin(),vec.end());
//     for(auto pair : vec){
//         cout << pair.first << "," << pair.second << " " ;
//     }
//     cout << endl ;
//     return 0;

// }

// custom comarator

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool comparator(pair<int,int> p1 , pair<int,int> p2){
//     if (p1.second < p2.second ) return true ;
//     if (p1.second > p2.second) return false ;
//     if(p1.first < p2.first) return true ;
//     else return false;

// }
                 
// int main() {
//     vector<pair<int,int>> vec = {{1,1},{4,1},{3,1},{2,2}};
//     sort(vec.begin(),vec.end(),comparator);
//     for(auto pair : vec){
//         cout << pair.first << "," << pair.second << " " ;
//     }
//     cout << endl ;       
//     return 0;
// }

// REVERSE

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
                 
// int main() {
//     vector<int> vec = {1,2,3,4,5}; 
//     reverse(vec.begin()+1,vec.begin()+3);
//     for(auto val : vec){
//         cout << val << " " ;
//     }
//     cout << endl ;      
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
                 
// int main() {
//     string str = "abc";
//     next_permutation(str.begin(),str.end()); 
//     cout << str << endl ;     
//     return 0;
// }

// #include<iostream>
// using namespace std;
                 
// int main() {
//     cout << min(4,5) << endl ;
//     cout << max(4,5) << endl ;
//     int a = 5 , b = 6 ;
//     swap(a,b);  
//     cout << a << " " << b << endl ;   
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
                 
// int main() {
//     // vector<int> vec = {1,2,3,4,5};  
//     // cout << binary_search(vec.begin(),vec.end(),5); 
//     int n = 15 ;
//     long int a = 10 ;
//     long long int b = 13 ;
//     cout << __builtin_popcount(10) << endl ;
//     cout << __builtin_popcountl(6) << endl ; //long int val 
//     cout << __builtin_popcountll(10) << endl ;   
//     return 0;
// }