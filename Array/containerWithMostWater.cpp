// #include<iostream>
// #include<vector>
// using namespace std;

// int MostWater(vector<int> height){
//     int area = 1 , maxWater = 1 ;
//     for (int i = 0; i < height.size(); i++)
//     {
//         for (int j =  i+1 ; j < height.size() ; j++)
//         {
//             int l = min(height[i],height[j]);
//             int w = j-i ;
//             maxWater = (maxWater,area);
//             area = l*w ;
//         }
        
//     }
//     return maxWater ;
    
// }
                 
// int main() {
//     vector<int> height = {1,8,6,2,5,4,8,3,7};
//     cout << MostWater(height);       
//     return 0;
// }

// optimized by 2 pointer approach 

// #include<iostream>
// #include<vector>
// using namespace std;

// int MostWater(vector<int> height){
//     int n = height.size();
//     int i = 0 , j = n-1 ;
//     int maxWater = 0 , area ;
//     while (i<j)
//     {
//         int w = j-i ;
//         int l = min(height[i],height[j]);
//         area = l*j ;
//         maxWater = max(maxWater,area);
//         if (height[i]<height[j])
//         {
//             i++ ;
//         }
//         else {
//             j-- ;
//         }
        
//     }
//     return maxWater ;
    
// }
                 
// int main() {
//     vector<int> height = {1,8,6,2,5,4,8,3,7};
//     cout << MostWater(height);   
//     return 0;
// }

// practice 

// #include<iostream>
// #include<vector>
// using namespace std;

// int MostWater(vector<int> height){
//     int n = height.size();
//     int maxWater = 1 ;
//     for (int i = 0; i < n; i++)
//     {
//         int area = 1 ;
//         for (int j = i+1; j < n; j++)
//         {
//             int l = min(height[i],height[j]);
//             int w = j-i;
//             area = l*w;
//             maxWater = max(area,maxWater);
//         }
        
//     }
//     return maxWater ;
    
// }
                 
// int main() {
//     vector<int> height = {1,8,6,2,5,4,8,3,7};
//     cout << MostWater(height);    
//     return 0;
// }

// practice optimal 

// #include<iostream>
// #include<vector>
// using namespace std;

// int mostWater(vector<int> height){
//     int n = height.size();
//     int i = 0 , j = n-1 ;
//     int maxWater = 1 , area ;
//     while (i<j)
//     {
//         int l = min(height[i],height[j]);
//         int w = j-i;
//         area = l*w;
//         maxWater = max(area,maxWater);
//         if (height[i]<height[j])
//         {
//             i++;
//         }else{
//             j--;
//         }
        
//     }
//     return maxWater;
    
// }
                 
// int main() {
//     vector<int> height = {1,8,6,2,5,4,8,3,7};
//     cout << mostWater(height);    
//     return 0;
// }