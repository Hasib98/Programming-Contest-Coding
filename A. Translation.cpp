//https://codeforces.com/problemset/problem/41/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    for( int i = 0 ; i < s2.size()/2 ; i++ )
    {
         swap(s2[i], s2[s2.size() - i - 1]);
    }

    if( s1 == s2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
