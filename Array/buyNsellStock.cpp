// #include<iostream>
// #include<vector>
// using namespace std;

// double pow(double x , int n){
//     if(x==0) return 0.0 ;
//     if(n==0) return 1.0 ;
//     if(x==1) return 1.0 ;
//     if(x== -1 && n%2 == 0) return 1.0 ;
//     if(x== -1 && n%2 != 0) return -1.0 ;
//     int binForm = n ;
//     if (binForm < 0)
//     {
//         x = 1/x ;
//         binForm = -binForm ;
//     }
    
//     long ans = 1 ; 
//     while (binForm > 0)
//     {
//         if (binForm %2 == 1)
//         {
//             ans *= x ;
//         }
//         x *= x;
//         binForm /= 2 ;
        
//     }
//     return ans ;
    
    
// }
                 
// int main() {
//     double x = 3 ;
//     int n = 3 ;
//     cout << pow(x,n);
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int bestBuy(vector<int> prices){
//     int n = prices.size();
//     int maxProfit = 0 , bestbuy = prices[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (prices[i] > bestbuy)
//         {
//             maxProfit = max(maxProfit,(prices[i]-bestbuy));
//         }
//         bestbuy = min(bestbuy,prices[i]);
        
//     }
//     if (maxProfit > 0)
//     {
//         return maxProfit ;
//     }
//     else {
//         return 0 ;
//     }
    
    
// }
                 
// int main() {
//     vector<int> prices = {7,1,5,3,6,4};
//     cout << bestBuy(prices);      
//     return 0;
// }


