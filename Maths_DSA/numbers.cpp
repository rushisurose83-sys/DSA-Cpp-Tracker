// Armstrong number
// #include<iostream>
// using namespace std;

// bool isArmStrong(int n){
//     int sum = 0;
//     int temp = n;
//     int dig;
//     while (temp>0)
//     {
//         dig = temp%10;
//         sum+=dig*dig*dig;
//         temp /=10;
//     }
//     if (sum==n)
//     {
//         return true;
//     }
//     else{
//         return false;
//     }
    
// }
                 
// int main() {
//     cout << isArmStrong(153);        
//     return 0;
// }

// GCD
// #include<iostream>
// using namespace std;

// int gcd(int a,int b){
//     int gcd=1;
//     for (int i = 2; i <= min(a,b); i++)
//     {
//         if (a%i==0 && b%i==0)
//         {
//             gcd=i;
//         }
        
//     }
//     return gcd;
    
// }
                 
// int main() {
//     cout << gcd(12,15);        
//     return 0;
// }

// Euclidean algorithm
// #include<iostream>
// using namespace std;

// int gcd(int a, int b){
//     while (a!=0 && b!=0)
//     {
//         if (a>b)
//         {
//             a=a%b;
//         }
//         else{
//             b=b%a;
//         }
//     }
//     if (a==0) return b;
//     else return a;
// }
                 
// int main() {
//     int a = 12 , b = 15;
//     cout << gcd(a,b) << endl;;
//     cout << (a*b)/gcd(a,b); // LCM       
//     return 0;
// }

// LCM = a*b/gcd(a,b)

// REVERSE NUMBER
#include<iostream>
using namespace std;

int revrseNum(int n){
    int rev=0;
    int dig;
    while (n!=0)
    {
        dig=n%10;
        rev = rev * 10 + dig;
        n/=10;
    }
    return rev;
    
}
                 
int main() {
    cout << revrseNum(6724);      
    return 0;
}