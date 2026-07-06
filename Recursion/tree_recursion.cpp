// #include<iostream>
// using namespace std;

// int x = 0 ;
// int fun(int n ){
//     // static int x = 0 ;
//     if(n>0){
//         x++;
//         return fun(n-1)+x;
//     }
//     return 0 ;
// }

// int main() {
//     int r = fun(5);
//     cout << r << endl ;
//     r = fun(5);
//     cout << r << endl ;  // x start from 5--->6 and become 10 and get added
//     return 0;
// }

// types of recursion
// 1 . tail recursion

// #include<iostream>
// using namespace std;

// void fun(int n){
//     if(n>0){
//         cout << n << " ";
//         fun(n-1) ;
//     }
// }

// int main() {
//     fun(5);
//     return 0;
// }

// tail using loop
// #include<iostream>
// using namespace std;

// void fun(int n){
//     while(n>0){
//         cout << n << " ";
//         n-- ;
//     }
// }

// int main() {
//     fun(5);
//     return 0;
// }

// 2. head recursion

// #include<iostream>
// using namespace std;

// void fun(int n){
//     if(n>0){
//         fun(n-1) ;
//         cout << n << " ";
//     }
// }

// int main() {
//     fun(5);
//     return 0;
// }

// head using loop

// #include<iostream>
// using namespace std;

// void fun(int n){
//     int i = 1 ;
//     while(i<=n){
//         cout << i << " ";
//         i++ ;
//     }
// }

// int main() {
//     fun(3);
//     return 0;
// }

// 3. Tree Recursion

// #include<iostream>
// using namespace std;

// void fun(int n){
//     if (n>0)
//     {
//         cout << n << ' ' ;
//         fun(n-1);
//         fun(n-1);
//     }

// }

// int main() {
//     fun(3);
//     return 0;
// }

// indirect recursion
// #include<iostream>
// using namespace std;

// void fun2(int n);

// void fun1(int n){
//     if (n>0)
//     {
//         cout << n << " ";
//         fun2(n-1);
//     }
// }
// void fun2(int n){
//     if(n>1){
//         cout << n << " ";
//         fun1(n/2);
//     }
// }

// int main() {
//     fun1(20);
//     return 0;
// }

// 5.nested recursion
// #include<iostream>
// using namespace std;

// int fun(int n){
//     if(n>100){
//         return n-10;
//     }
//     else {
//         return fun(fun(n+11));
//     }
// }

// int main() {
//     cout << fun(30);
//     return 0;
// }

// Sum of n natural number
// #include<iostream>
// using namespace std;

// int sum(int n){
//     if(n==0) return 0 ;
//     return n+sum(n-1) ;
// }

// int main() {
//     cout << sum(10);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int sum(int n){
//     if(n==0) return 0 ;
//     return n*(n+1)/2 ;
// }

// int main() {
//     cout << sum(10);
//     return 0;
// }

// factorial
// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if(n==0) return 1 ;
//     return n*factorial(n-1);
// }

// int main() {
//     cout << factorial(5);
//     return 0;
// }

// fibonacchi

// #include<iostream>
// using namespace std;

// int fib(int n) {
//     if(n <= 1 ) return n;
//     return fib(n-1)+fib(n-2);
// }

// int main() {
//     cout << fib(3);
//     return 0;
// }

// check palindrome

// #include <iostream>
// #include<algorithm>
// using namespace std;

// bool palindromeCheck(string s)
// {
//     string k = s;
//     reverse(s.begin(), s.end());
//     return s == k;
// }

// int main()
// {
//     cout << palindromeCheck("naman") ;
//     return 0;
// }

// by recursion
// #include<iostream>
// using namespace std;

// bool palindromeCheck(string s){
//     if(s.length() <= 1) return true ;
//     if(s[0] != s[s.length()-1]) return false ;
//     return palindromeCheck(s.substr(1, s.length()-2)) ;
// }
                 
// int main() {
//     cout << palindromeCheck("a man, a plan, a canal: panama") ;
//     return 0;
// }

// reverse an array
#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    if(n <= 1) return;
    swap(arr[0],arr[n-1]);
    reverse(arr + 1, n - 2);
}
                 
int main() {
    int arr[] = {1,2,1,1,5,1} ;
    int n = 6;
    reverse(arr,n);
    for(auto val : arr){
        cout << val << " ";
    }        
    return 0;
}