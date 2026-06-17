// #include<iostream>
// #include<cstring>
// using namespace std;
                 
// int main() {
//     int arr[] = {1,2,3};
//     char str[] = "Rushi";
//     cout << arr << endl ; // &arr[0] or int* ptr = &arr[0]
//     cout << str << endl ;  
//     cout << str[5] << endl ;
//     cout << strlen(str) << endl ;     
//     return 0;
// }

// #include<iostream>
// using namespace std;
                 
// int main() {
//     char str[100];
//     cout << "Input string :";
//     cin >> str ;
//     cout << "output :" << str << endl ;

//     return 0;
// }

// #include<iostream>
// #include<cstring>
// #include<string>
// using namespace std;
                 
// int main() {
//     char str[7];
//     cout<< "enter char array : " ;
//     cin.getline(str,7,'.'); 
//     // cout << str << endl ;  
//     for (char ch : str) {
//         cout << ch << " " ;

//     }
//     cout << endl ;
    
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
                 
// int main() {
//     char str[] = "rushi." ;
//     int len = 0 ;
//     for (int i = 0; i < str[i] != 0; i++)
//     {
//         len++;
//     }
//     cout << "length :" << len ;      
//     return 0;
// }

// #include<iostream>
// using namespace std;
                 
// int main() {
//     string str = "Hello" ;
//     string str2 = "world" ;
//     string str3 = str+" "+str2;
//     cout << str3 << endl ;
//     cout << str <<endl ;        
//     return 0;
// }

// check 
// #include<iostream>
// using namespace std;
                 
// int main() {
//     string str1 = "rushi";
//     string str2 = "surose";
//     cout << (str1>str2) << endl ;        
//     return 0;
// }

// #include<iostream>
// #include<cstring>
// using namespace std;
                 
// int main() {
//     string str ;
//     cout << "enter name : " ;
//     getline(cin,str) ;
//     cout << str ;     
//     return 0;
// }

// #include<iostream>
// using namespace std;
                 
// int main() {
//     string str = "Rushi Surose";
//     // for (int i = 0; i < str.length() ; i++)
//     // {
//     //     cout << str[i] ;
//     // }
//     // cout << endl ;
//     for(char ch : str){
//         cout << ch ;
//     }
//     cout << endl ;
           
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
                 
// int main() {
//     // char str[] = {'R','u','s','h','i','\0'} ;
//     // int n = sizeof(str)/sizeof(str[0]);
//     // int i = 0 , j = n ;
//     // while (i<j)
//     // {
//     //     swap(str[i],str[j]);
//     //     i++;
//     //     j--;
//     // }
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << str[i] << " " ;
//     // }
//     // cout << endl ;
//     string str = "Rushi";
//     reverse(str.begin(),str.end());
//     cout << str << endl ;     
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
                 
// int main() {
//     string str = "madam";
//     string temp = str ;
//     reverse(temp.begin(),temp.end());
//     if (temp==str)
//     {
//         cout << "isPalindrome";
//     }
//     else {
//         cout << "notPalindrome";
//     }
    
    
    // int n = str.length()-1;
    // char r = '\0';
    // string rev ;
    // while (n>=0)
    // {
    //     r = str[n];
    //     rev += r ;
    //     n--;
    // }
    // cout << rev << endl ;
            
//     return 0;
// }