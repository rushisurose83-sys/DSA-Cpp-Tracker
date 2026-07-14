// exponential function using recursion

// #include<iostream>
// using namespace std;

// int pow(int m , int n){
//     if(n==0) return 1 ;
//     return m*pow(m,n-1) ;
// }
                 
// int main() {
//     cout << pow(2,3);     
//     return 0;
// }

// more optimized version of the above code

// #include<iostream>
// using namespace std;

// int pow(int m , int n ){
//     if(n==0) return 1 ;
//     if(n%2 == 0) return pow(m*m,n/2);
//     else return m*pow(m*m,(n-1)/2);
// }
                 
// int main() {
//     cout << pow(2,5);      
//     return 0;
// }

// #include<iostream>
// using namespace std;

// double myPow(double x, int n)
// {
//     if(n<0) return myPow(1/x,(-n));
//     if (n == 0)
//         return 1;
//     if (n % 2 == 0)
//         return myPow(x * x, n / 2);
//     else
//         return x * myPow(x * x, (n - 1) / 2);
// }

// int main() {
//     cout << myPow(2.10000,3);      
//     return 0;
// }

// taylore series 
// #include<iostream>
// using namespace std;

// double e(int x, int n ){
//     static double f = 1 , p = 1 ;
//     double r = 0 ;
//     if(n==0) return 1 ;
//     else{
//         r = e(x,(n-1));
//         p *= x ;
//         f *= n ;
//     }
//     return r+p/f;
// }
                 
// int main() {
//     cout << e(1,10);      
//     return 0;
// }

// #include<iostream>
// using namespace std;

// double e(double x , double n ){
//     double s = 1 ;
//     while(n>0){
//         s = 1 + (x/n)*s ;
//         n--;
//     }
//     return s ;
// }
                 
// int main() {
//     cout << e(1,10)  ;    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// double e(double x , double n){
//     static double s = 1 ;
//     if(n==0) return s ;
//     s = 1+(x/n)*s ;
//     return e(x,(n-1));
// }
                 
// int main() {
//     cout << e(1,10);       
//     return 0;
// }

// fibonacci 

// #include<iostream>
// using namespace std;

// int fib(int n){
//     if(n==0 || n==1) return n ;
//     return fib(n-1)+fib(n-2);
// }
                 
// int main() {
//     cout << fib(7);        
//     return 0;
// }

// using loop 

// #include<iostream>
// #include<vector>
// using namespace std;

// int fib(int n){
//     vector<int> s(n+1) ;
//     s[0] = 0 ;
//     s[1] = 1 ;
//     for (int i = 2; i < n+1; i++)
//     {
//         s[i]=s[i-1]+s[i-2];
//     }
//     return s[n] ;
    
// }
                 
// int main() {
//     cout << fib(7);      
//     return 0;
// }

// using loop 

// #include<iostream>
// using namespace std;

// int fib(int n){
//     int t0 = 0 , t1 = 1 , s ;
//     for (int i = 2; i <= n; i++)
//     {
//         s = t0 + t1 ;
//         t0 = t1 ;
//         t1 = s ;
//     }
//     return s ;
    
// }
                 
// int main() {
//     cout << fib(7);      
//     return 0;
// }

// reduction in time using array
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> F(10,-1);
// int fib(int n){

//     if(n<=1) {
//         F[n] = n;
//         return n ;
//     }
//     else{
//         if (F[n-1]==-1)
//         {
//             F[n-1]=fib(n-1);
//         }
//         if (F[n-2]==-1)
//         {
//             F[n-2]=fib(n-2);
//         }
//         return F[n-1]+F[n-2];
        
//     }
// }
                 
// int main() {
//     cout << fib(7) ;      
//     return 0;
// }

// ncr combination

// #include<iostream>
// using namespace std;

// int fact(int n){
//     if(n==0) return 1 ;
//     return n*fact(n-1);
// }

// int combination(int n , int r ){
//     int t0 = fact(n-r);
//     int t1 = fact(r);
//     int t2 = fact(n);
//     return t2/(t0*t1);
// }
                 
// int main() {
//     cout << combination(5,1);      
//     return 0;
// }

// combination using pascal triangle

// #include<iostream>
// using namespace std;

// int C(int n , int r ){
//     if(r==0 || r == n) return 1 ;
//     return C(n-1,r-1) + C(n-1,r);

// }
                 
// int main() {
//     cout << C(5,3);       
//     return 0;
// }

// // #include<iostream>
// // using namespace std;

// // int pascalTriangleI(int r, int c)
// // {
// //     if (c==1 || r == c)
// //         return 1;
// //     else
// //         return pascalTriangleI(r - 1, c-1) + pascalTriangleI(r - 1, c);
// // }

// // int main() {
// //     cout << pascalTriangleI(5,3);       
// //     return 0;
// }

// generate pascal teiangle 
// #include<iostream>
// #include<vector>
// using namespace std;

// vector<vector<int>> generate(int n)
// {
//     vector<vector<int>> sol;
//     for (int i = 1; i <= n; i++)
//     {
//         vector<int> row ;
//         for (int j = 1; j <= i; j++)
//         {
//             if(j==1 || i==j) row.push_back(1);
//             else{
//                 row.push_back(sol[i-2][j-2]+sol[i-2][j-1]) ;
//             }
//         }
//         sol.push_back(row);
        
//     }
//     return sol ;
    
// }

// int main() {
//     vector<vector<int>> ans =  generate(5) ;
//     for(auto vec : ans){
//         for(auto val : vec){
//             cout << val << " ";
//         }
//         cout << endl ;
//     }      
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

int fib(int n){
    static vector<int> F(n+1,-1);
    if(n==0 || n==1){
        F[n] = n ;
        return F[n];
    }
    else{
        if (F[n-1]==-1)
        {
            F[n-1] = fib(n-1) ;
        }
        if (F[n-2]==-1)
        {
            F[n-2] = fib(n-2);
        }
        return F[n-1]+F[n-2];
    }
}
                 
int main() {
    cout << fib(7);      
    return 0;
}