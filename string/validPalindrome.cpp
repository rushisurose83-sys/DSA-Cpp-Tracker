// #include<iostream>
// #include<algorithm>
// using namespace std;

// bool isPal(string s){
//     string temp = s;
//     reverse(temp.begin(),temp.end());
//     if (temp == s)
//     {
//         return true ;
//     }
//     else {
//         return false ;
//     }
// }
                 
// int main() {
//     // string s = "Ac3?e3c&a";
//     string s = "madam";
//     int k = isPal(s);
//     if (k==1)
//     {
//         cout << "pal";
//     }
//     else{
//         cout << "not";
//     }
//     return 0;
// }

// long way
// #include<iostream>
// using namespace std;

// bool isAlphaNum(char s){
//     if (s >= 0 && s <= 9)
//     {
//         return true ;
//     }
//     if (tolower(s)>='a' && tolower(s)<='z')
//     {
//         return true;
//     }
//     return false ;
// }

// bool isPal(string s){
//     int i = 0 , j = s.length()-1;
//     while (i<j)
//     {
//         if (!isAlphaNum(s[i]))
//         {
//             i++;
//             continue;
//         }
//         if (!isAlphaNum(s[j]))
//         {
//             j--;
//             continue;
//         }
//         if (tolower(s[i])!= tolower(s[j]))
//         {
//             return false;
//         }
//         i++;
//         j--;  
//     }
//     return true ;
    
// }
                 
// int main() {
//     string s = "Rushi";
//     int k = isPal(s);
//     if (k==1)
//     {
//         cout << "PAL";
//     }
//     else {
//         cout << "NOT";
//     }
         
//     return 0;
// }

// remove occ
// #include<iostream>
// using namespace std;

// string remove_occ(string s,string part){
//     while (s.length()>0 && s.find(part)<s.length())
//     {
//         s.erase(s.find(part),part.length());
//     }
//     return s;
// }
                 
// int main() {
//     string s = "daabcpaabcbc";
//     string part = "abc";
//     cout << remove_occ(s,part);      
//     return 0;
// }

// practice
#include<iostream>
#include<algorithm>
using namespace std;

bool AlphaNum(char s){
    if (s>=0 && s<=9)
    {
        return true;
    }
    if (s>='a' && s<='z')
    {
        return true;
    }
    return false;
}

bool isPal(string s){
    int i = 0 , j = s.length()-1;
    while (i<j)
    {
        if (!AlphaNum(s[i]))
        {
            i++;
            continue;
        }
        if (!AlphaNum(s[j]))
        {
            j--;
            continue;
        }
        if (tolower(s[i])!= tolower(s[j]))
        {
            return false;
        }
        i++;
        j--;   
    }
    return true;
    
}

int main(){
    string s = "n@a3m3an";
    cout << isPal(s);
    return 0;
}