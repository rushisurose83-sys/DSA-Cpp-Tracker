 // 1.VECTORS
// // size and capacity
// // #include<iostream>
// // #include<vector>
// // using namespace std;
                 
// // int main() {
// //     vector<int> vec(7,10);
// //     for (int val : vec){
// //         cout << val << " " ;
// //     }
// //     cout << endl;
// //     vector<int> vec1(vec);
// //     for (int val : vec1){
// //         cout << val << " " ;
// //     }
//     // vec.push_back(1);
//     // vec.push_back(2);
//     // vec.push_back(3); 
//     // // cout << vec.size() << endl ; 
//     // // cout << vec.capacity() << endl ;   
//     // // cout << vec[2] << endl ;
//     // // cout << vec.at(2) << endl;
//     // // vec.emplace_back(4);
//     // // cout << vec.at(3) << endl ;  
//     // cout << vec.front() << endl ;
//     // cout << vec.back() << endl ;
//     // return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
                 
// int main() {
//     vector<int> vec = {1,2,3,4,5};
//     // vec.erase(vec.begin()+2);
//     // range 
//     // vec.erase(vec.begin()+1,vec.begin()+3); // end excluded
//     // vec.insert(vec.begin()+2,100);
//     // vec.clear();
//     // cout << vec.size() << vec.capacity() << endl ;
//     // cout << vec.empty() << endl ;
//     for (int val : vec){
//         cout << val << " " ;
//     }   
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
                 
// int main() {
//     vector<int> vec = {1,2,3,4,5};
//     auto p = vec.begin() ;
//     cout << *p << endl;   
//     cout << *(vec.end());    
//     return 0;
// }

// LIST
// #include<iostream>
// #include<list>
// using namespace std;
                 
// int main() {
//     list<int> l = {1,2,3,4}; 
//     l.emplace_back(8);
//     l.push_front(5);
//     l.pop_back();
//     l.pop_front();
//     for(int val:l){
//         cout << val << " " ;
//     }     
//     // cout << l[2] << endl ;
//     return 0;
// }

// Deque
// #include<iostream>
// #include<deque>
// using namespace std;
                 
// int main() {
//     deque<int> l = {1,2,3,4}; 
//     l.emplace_back(8);
//     l.push_front(5);
//     l.pop_back();
//     l.pop_front();
//     // for(int val:l){
//     //     cout << val << " " ;
//     // }     
//     cout << l[2] << endl ;
//     return 0;
// }

// PAIR
// #include<iostream>
// using namespace std;
                 
// int main() {
//     pair<int,char> p = {1,'a'} ;
//     cout << p.first << "&" << p.second << endl; 
//     pair<int,pair<int,char>> q = {1,p};
//     cout << q.second.first << "&" << q.second.second << endl ;    
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
                 
// int main() {
//     vector<pair<int,int>> vec = {{1,2},{3,4},{5,6}};  
//     for(pair<int,int> p : vec){
//         cout << p.first << "," << p.second << endl ;
//     }      
//     return 0;
// }

// VECTOR REVVVVVVVVVV
// #include<iostream>
// #include<vector>
// using namespace std;
                 
// int main() {
//     vector<int> vec = {1,2,3};
//     vec.push_back(4);
//     vec.emplace_back(5); 
//     cout << vec.size() << endl ;
//     cout << vec.capacity() << endl ;
//     cout << vec.at(2) << "or" << vec[2] << endl;
//     cout << vec.front() << endl ;
//     cout << vec.back() << endl ;
//     for (int val :vec){
//         cout << val << " " ;
//     }      
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
                 
// int main() {
//     vector<int> vec = {1,2,3,4,5}; // DP
//     vector<int> vec2(vec); 
//     vec.insert(vec.begin()+2,100);
//     for (int i = 0; i < vec.size(); i++)
//     {
//         cout << vec[i] << " " ;
//     }
//     cout << endl ;
//     cout << vec.empty();
           
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
                 
// int main() {
//     vector<int> vec = {1,2,3,4,5};
//     for (auto it = vec.begin(); it != vec.end() ; it++){
//         cout << *(it) << " " ;
//     }  
//     // for (auto it = vec.rbegin();it != vec.rend();it++){
//     //     cout << *(it);
//     // }
//     return 0;
// }

// deque
// #include<iostream>
// #include<deque>
// using namespace std;
                 
// int main() {
//     deque<int> d = {1,2,3};
//     for (int val : d) {
//         cout << val << " ";
//     }      
//     cout << endl ;
//     cout << d[2] << endl ;
//     return 0;
// }

// pairs
#include<iostream>
#include<vector>
using namespace std;
                 
int main() {
    vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};
    vec.push_back({4,5});
    vec.emplace_back(5,6); // create in place object 
    for( pair<int,int> val : vec){
        cout << val.first << " " << val.second << endl ;
    }
    return 0;
}