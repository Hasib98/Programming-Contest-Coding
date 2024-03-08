//https://codeforces.com/problemset/problem/49/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    s.erase(remove_if(s.begin(), s.end(), ::isspace),
        s.end());
    char c = s[s.size()-2];
        // evaluates to 1 if variable c is a lowercase vowel
    bool lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');

    // evaluates to 1 if variable c is a uppercase vowel
    bool uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y');
     if (lowercase_vowel || uppercase_vowel)
     {
        cout<<"YES";
     }
     else { cout<<"NO";}

    return 0;
}
