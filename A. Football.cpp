//https://codeforces.com/problemset/problem/96/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 1 ;
    string  s;
    cin >> s ;
    for( int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == s[i+1] && count !=7 )
        {
            count++;
        }
        else
        {
            if(count !=7)
            {
                count = 1;
                continue;
            }
            else
            {
                cout<<"YES";
                return 0;
            }

        }

    }
    cout<<"NO";
    return 0;
}
