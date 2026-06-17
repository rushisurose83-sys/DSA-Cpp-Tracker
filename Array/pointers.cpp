// #include<iostream>
// using namespace std;
                 
// int main() {
//     float a = 225.99 ;
//     float* ptr = &a ;
//     float** ptr2 = &ptr ;
//     // cout << ptr << endl ;
//     // cout << &a << endl ;
//     // cout << &ptr << endl ;
//     // cout << ptr2 << endl ; 
//     cout << *(&a) << endl ;   // * derefrence   
//     cout << *(ptr) << endl ;
//     cout << **(ptr2) << endl ;
//     return 0;
// }

// #include<iostream>
// using namespace std;
                 
// int main() {
//     int* ptr = NULL ;
//     // cout << ptr << endl ; 
//     cout << *(ptr) << endl ;        
//     return 0;
// }

// #include<iostream>
// using namespace std;
                 
// int main() {
//     int a = 5 ;
//     int* p = &a ;
//     int** q = &p ;
//     cout << *p << endl ; 
//     cout << **q << endl ;
//     cout << p << endl ;
//     cout << *q << endl ;       
//     return 0;
// }

// pass by efrence 

//  not changed
// #include<iostream>
// using namespace std;

// void changeA(int a){
//     a = 20 ;
// }
                 
// int main() {
//     int a = 10 ;
//     changeA(a);
//     cout << "inside main Fn : " << a << endl ;
            
//     return 0;
// }

// changed 
// #include<iostream>
// using namespace std;

// void changeA(int* ptr){
//     *(ptr) = 20 ;  // here val at adress is chnaged ;
// }
                 
// int main() {
//     int a = 10 ;
//     changeA(&a);
//     cout << "inside main Fn : " << a << endl ;
            
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void changeA(int &b){  // &b indicate the adress of memory location 
//     b = 20 ;  // here val at adress is chnaged ;
// }
                 
// int main() {
//     int a = 10 ;
//     changeA(a);
//     cout << "inside main Fn : " << a << endl ;
            
//     return 0;
// }

// #include<iostream>
// using namespace std ;

// int main () {
//     int arr[] = {1,2,3,4};
//     cout <<*arr << endl ; // pointer
//     return 0 ;
// }

// #include<iostream> 
// #include<vector>
// using namespace std ;

// int main (){
//     int a = 10 ;
//     int* ptr = &a ;
//     cout << ptr << endl ;
//     // ptr-- ;
//     // cout << ptr << endl ; // +4 bytes
//     ptr = ptr+2 ;
//     cout << ptr << endl ;
//     return 0 ;
  
// }

// #include<iostream>
// using namespace std;
                 
// int main() {
//     int arr[] = {1,2,3,4};
//     cout << *arr << endl ;
//     cout << *(arr+1) << endl ;
//     cout << *(arr+2) << endl ;
//     cout << *(arr+3) << endl ;        
//     return 0;
// }

// #include<iostream>
// using namespace std;
                 
// int main() {
//     int arr[] = {1,2,3,4};
//     // cout << *arr << endl ;
//     cout << *(arr+3) - *(arr) << endl ; // substracrion of pointer 
    

//     return 0;
// }

// #include<iostream>
// using namespace std;
                 
// int main() {
//     int* ptr ;
//     int* ptr2 = ptr+2 ;
//     cout << ptr2 - ptr; // 2
//     return 0;
// }

// compare 

#include<iostream>
using namespace std;
                 
int main() {
    int* ptr1 ;
    int* ptr2 ;
    
    cout << (ptr1<ptr2) << endl ;
    return 0;
}