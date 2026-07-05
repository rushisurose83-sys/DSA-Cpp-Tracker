// tail_function
// #include<iostream>
// using namespace std;

// void fun(int n){
//     if(n>0){
//         cout << n << " ";
//         fun(n-1);
//     }
// }

// int main() {
//     int x = 3 ;
//     fun(x);
//     return 0;
// }

// head function
// #include<iostream>
// using namespace std;

// void fun(int n ){
//     if(n>0){
//         fun(n-1) ;
//         cout << n ;
//     }
// }

// int main() {
//     int x = 3 ;
//     fun(x);
//     cout << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int sumRec(int n){
//     int sum = n;
//     if (n > 0)
//     {
//         sum += sumRec(n - 1);
//     }
//     return sum;
// }

// int main() {
//     int x = 3 ;
//     cout << sumRec(x);
//     return 0 ;
// }

// Print Name N times.
// #include<iostream>
// using namespace std;

// void fun(int n , string name){
//     if(n>0){
//         cout << name << " ";
//         fun(n-1 , name) ;
//     }
// }

// int main() {
//     int x = 3 ;
//     fun(x , "Rushi");
//     cout << endl;
//     return 0;
// }

// Print 1 to N
// #include<iostream>
// using namespace std;

// void printNumbers(int n) {
//         if(n>0) {
//             printNumbers(n-1) ;
//             cout << n << endl ;
//         }
// }

// int main() {
//     printNumbers(5);
//     return 0;
// }

// sum of n number
// #include <iostream>
// using namespace std;

// int NnumbersSum(int n)
// {
//     if(n==1) return 1 ;
//     return n+NnumbersSum(n-1);
// }

// int main()
// {
//     cout << NnumbersSum(10) << endl ;
//     return 0;
// }

// factorial using recursion
// #include <iostream>
// using namespace std;

// int factorial(int n) {
//         int product = n ;
//         if(n==0) return 1 ;
//         return product*factorial(n-1) ;
// }

// int main()
// {
//     cout << factorial(5) << endl ;
//     return 0;
// }

#include<iostream>
using namespace std;

int reverseNumber(int n) {
        int rev = 0 ;
        while(n>0){
            int r = n%10 ;
            rev = rev*10 + r ;
            n /= 10 ;
        }
        return rev ;

}
                 
int main() {
    cout << reverseNumber(125);       
    return 0;
}