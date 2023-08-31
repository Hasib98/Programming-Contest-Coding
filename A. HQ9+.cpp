//https://codeforces.com/problemset/problem/133/A
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int length = s.size();
    while(length--)
    {
        if( s[length] == 'H' || s[length] == 'Q' || s[length] == '9'  )
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
