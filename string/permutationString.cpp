// // #include<iostream>
// // using namespace std;

// // bool isFreqSame(int freq1[],int freq2[]){
// //     for (int i = 0; i < 26; i++)
// //     {
// //         if (freq1[i]!=freq2[i])
// //         {
// //             return false;
// //         }
        
// //     }
// //     return true ;
    
// // }

// // bool check(string s1 , string s2){
// //     // Store
// //     int freq[26] = {0};
// //     for (int i = 0; i < s1.length(); i++)
// //     {
// //         int idx = s1[i]-'a';
// //         freq[idx]++;
// //     }
// //     // find
// //     int windSize = s1.length();
// //     for (int i = 0; i < s2.length(); i++)
// //     {
// //         int windFreq[26] = {0};
// //         int windIdx = 0 ;
// //         int idx = i;
// //         while (windIdx<windSize && idx < s2.length())
// //         {
// //             windFreq[s2[idx]-'a']++;
// //             windIdx++; idx++;
// //         }
// //         if (isFreqSame(freq,windFreq)) // find ;
// //         {
// //         return true ;
// //         }
        
// //     }
// //     return false; 
    
// // }
                 
// // int main() {
// //     string s1 = "ab" , s2 = "eidbaooo"; 
// //     cout << check(s1,s2);      
// //     return 0;
// // }

// // practice 
// #include<iostream>
// using namespace std;

// bool isFreqSame(int freq1[],int freq2[]){
//     for (int i = 0; i < 26; i++)
//     {
//         if (freq1[i]!=freq2[i])
//         {
//             return false;
//         } 
//     }
//     return true; 
// }

// bool permutationCheck(string s1,string s2){
//     // store repetation
//     int freq[26]={0};
//     for (int i = 0; i < s1.length(); i++)
//     {
//         int idx=s1[i]-'a';
//         freq[idx]++;
//     }
//     // check availability
//     int windSize = s1.length();
//     for (int i = 0; i < s2.length(); i++)
//     {
//         int windFreq[26] = {0};
//         int windIdx=0;
//         int idx=i;
//         while (windIdx<windSize && idx<s2.length())
//         {
//             windFreq[s2[idx]-'a']++;
//             idx++,windIdx++;
//         }
//         if(isFreqSame(windFreq,freq)){
//             return true;
//         }
        
        
//     }
//     return false;
// }
                 
// int main() {
//     string s1="ki",s2="eidbaooo";
//     cout << permutationCheck(s1,s2);       
//     return 0;
// }