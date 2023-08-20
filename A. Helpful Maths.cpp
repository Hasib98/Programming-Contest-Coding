//https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;


    for (int i = 0; i < s.size() - 1; ++i )
    {
        for (int j = 0; j < s.size() - i - 1; ++j)
        {
            if (s[j] > s[j + 1])
            {
                int temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    for(int  i = 0 ; i < (s.size()/ 2) + 1 ; i++ )
    {
        s[i] = s[i+(s.size()/ 2)];
    }


    for(int  i = 0 ; i < (s.size()/ 2)+1 ; i++ )
    {
        cout << s[i];
        if( i < (s.size()/ 2) )
        {
            cout<<"+";
        }
    }
    return 0;
}

