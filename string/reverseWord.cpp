// #include<iostream>
// #include<algorithm>
// using namespace std;

// string reverseWord(string s){
//     reverse(s.begin(),s.end());
//     string ans = " ";
//     for (int i = 0; i < s.length(); i++)
//     {
//         string word = " ";
//         while (i<s.length() && s[i] != ' ')
//         {
//             word += s[i];
//             i++;
//         }
//         reverse(word.begin(),word.end());
//         if (word.length()>0)
//         {
//             ans += ""+word;
//         }  
//     }
//     return ans.substr(1) ; // strt string from index 1
    
// }
                 
// int main() {
//     string s = "hello World";
//     cout << reverseWord(s);      
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
                 
// int main() {
//     string s = "rushi surose";
//     reverse(s.begin(),s.end());
//     cout<< s <<endl;        
//     return 0;
// }

// practice
#include<iostream>
#include<algorithm>
using namespace std;

string reverseWord(string s){
    reverse(s.begin(),s.end());
    string ans=" ";
    for (int i = 0; i < s.length(); i++)
    {
        string word = " ";
        while (s[i] != ' ' && i < s.length())
        {
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if (word.length()>0)
        {
            ans+=""+word;
        }
    }
    return ans.substr(1);
    
}
                 
int main() {
    string s = "rushi surose";
    cout << reverseWord(s) << endl;    
    return 0;
}