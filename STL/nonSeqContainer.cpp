// STACK
// #include<iostream>
// #include<stack>
// using namespace std;
                 
// int main() {
//     stack<int> s ;
//     s.push(1);
//     s.emplace(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     // cout << s.top() << endl ;  
//     while (!s.empty())
//     {
//         cout << s.top() << endl ;
//         s.pop();
//     } 
//     return 0;
// }

// #include<iostream>
// #include<stack>
// using namespace std;
                 
// int main() {
//     stack<int> s ;
//     s.push(1);
//     s.emplace(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);
//     stack<int> s2 ;
//     swap(s,s2);
//     cout << s.size() << endl ;
//     cout << s2.size() << endl ;
//     return 0;
// }


// QUEUE
// #include<iostream>
// #include<queue>
// using namespace std;
                 
// int main() {
//     queue<int> q ;
//     q.push(1); 
//     q.push(2);
//     q.push(3);
//     q.push(4); 
//     while (!q.empty())
//     {
//         cout << q.front() << " " ;
//         q.pop();
//     }
         
//     return 0;
// }

// priority queue
// #include<iostream>
// #include<queue>
// using namespace std;
                 
// int main() {
//     priority_queue<int ,vector<int> , less<int>> s ;  
//     s.push(5);
//     s.push(10);
//     s.push(3);
//     s.push(2);
//     while (!s.empty())
//     {
//         cout << s.top() << " " ;
//         s.pop();
//     }
     
//     return 0;
// }

// MAP 
// #include<iostream>
// #include<map>
// using namespace std;
                 
// int main() {
//     map<string,int> m;
//     m["tv"] = 50 ;
//     m["laptop"] = 70 ;
//     m["mobile"] = 50 ;
//     m["camera"] = 30 ;
//     m["watch"] = 20 ;
//     m["tablet"] = 10 ;
//     m.insert({"headphone",54});
//     m.insert({"headphone",45});
//     m.insert({"headphone",23});
//     m.insert({"headphone",95});
//     m.emplace("cable",30) ;
//     for(auto p : m){
//         cout << p.first << "=" << p.second << endl ;
//     }  
//     // if(m.find("camera") != m.end()){
//     //     cout << "found\n" ;
//     // }
//     // else {
//     //     cout << "Not found \n" ;
//     // }
//     return 0;
// }

// other map 
// 1.Multi map 

// #include<iostream>
// #include<map>
// using namespace std;
                 
// int main() {
//     multimap<string , int > m;
//     m.insert({"a",25});
//     m.insert({"b",32});
//     m.insert({"c",44});
//     m.insert({"d",53});
//     m.insert({"a",67});
//     m.erase(m.find("a"));
//     for (auto p : m){
//         cout << p.first << "=" << p.second << endl ;
//     }
    
            
//     return 0;
// }

// Unordered Map
// #include<iostream>
// #include<unordered_map>
// using namespace std;
                 
// int main() {
//     unordered_map<string , int > m;
//     m.insert({"c",44});
//     m.insert({"a",25});
//     m.insert({"b",32});
//     m.insert({"d",53});
//     for (auto p : m){
//         cout << p.first << "=" << p.second << endl ;
//     }
    
            
//     return 0;
// }

// SET
// #include<iostream>
// #include<set>
// using namespace std;
                 
// int main() {
//     set<int> s ;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(6);
    
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     // cout << *s.lower_bound(4) << endl ;
//     // cout << *s.upper_bound(4) << endl ;
//     cout << s.size() << endl ; 
//     for(auto p : s){
//         cout << p << " " ;
//     }    
//     return 0;
// }

// multi set
// #include<iostream>
// #include<set>
// using namespace std;
                 
// int main() {
//     multiset<int> s ;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);
//     s.insert(6);
    
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     // cout << *s.lower_bound(4) << endl ;
//     // cout << *s.upper_bound(4) << endl ;
//     cout << s.size() << endl ; 
//     for(auto p : s){
//         cout << p << " " ;
//     }    
//     return 0;
// }

// unordered set
#include<iostream>
#include<unordered_set>
using namespace std;
                 
int main() {
    unordered_set<int> s ;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    
    s.insert(1);
    s.insert(2);
    s.insert(3);
    // cout << *s.lower_bound(4) << endl ;
    // cout << *s.upper_bound(4) << endl ;
    cout << s.size() << endl ; 
    for(auto p : s){
        cout << p << " " ;
    }    
    return 0;
}