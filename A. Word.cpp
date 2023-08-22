//https://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
using namespace std;

string upper_string(string s)
{
    for(int i = 0 ; i < s.size() ; i ++)
    {
        s[i] = toupper(s[i]);

    }
    return s;
}

string lower_string(string s)
{
    for(int i = 0 ; i < s.size() ; i ++)
    {
        s[i] = tolower(s[i]);
    }
    return s;
}


int main()
{
    int upper = 0, lower = 0;
    string s;
    cin>> s;
    for(int i = 0 ; i < s.size() ; i ++)
    {
        ( isupper(s[i]) ) ? upper++ : lower++ ;
    }
    if( upper > lower )
    {
        cout<<upper_string(s);
    }
    else
    {
        cout<<lower_string(s);
    }
    return 0;
}

