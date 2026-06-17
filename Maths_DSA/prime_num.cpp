// #include<iostream>
// using namespace std;

// string isPrime(int n){
//     int prime = 1;
//     if(n==0 || n==1)
//     {
//         return "Not an Prime";
//     }

//     for (int i = 2; i*i <=n ; i++)
//     {
//         if (n%i==0)
//         {
//             return "Not A Prime";
//         }
//     }
//     return "Prime";

// }

// int main() {
//     cout << isPrime(1);
//     return 0;
// }

// count of prime number
// sieve of eratosthene

#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){
  int count=0;
  vector<int> isPrime(n+1,true);
  isPrime[0] = isPrime[1] = false ;
  for (int i = 2; i <= n; i++)
  {
    if (isPrime[i])
    {
      count++;
    }
    for (int j = 2*i ; j<= n; j+=i)
    {
      isPrime[j]=false;
    }
  }
  
  // // Count all remaining primes
  // for (int i = 2; i <= n; i++)
  // {
  //   if (isPrime[i])
  //     count++;
  // }
  
  return count;
  
}
                 
int main() {
    cout << countPrime(10);     
    return 0;
}