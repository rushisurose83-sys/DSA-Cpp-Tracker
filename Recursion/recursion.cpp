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
#include<iostream>
using namespace std;

void fun(int n){
    if(n>0){
        fun(n-1);
        cout << n << " ";
    }
}
                 
int main() {
    int x = 3 ;
    fun(x);  
    cout << endl;     
    return 0;
}

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