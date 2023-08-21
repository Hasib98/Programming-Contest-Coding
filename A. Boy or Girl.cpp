//https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int Count = 0;
    cin >> s;
    for(int i = 0 ; i < s.size() ; i++ )
    {

        for(int j = i+1 ; j < s.size() ; j++ )
        {
            if( s[i] != s[j])
            {
                continue;
            }
            else
            {
                Count++;
                break;
            }
        }

    }


    if((s.size() - Count)%2 ==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!" ;
    }
    return 0;
}

