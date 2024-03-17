//https://codeforces.com/contest/495/problem/A
#include<bits/stdc++.h>
using namespace std;
int check(char c)
{
    if(c == '0')
    {
        return 2;
    }
    else if((c == '1'))
    {
        return 7;
    }
    else if(c == '2')
    {
        return 2;
    }
    else if(c == '3')
    {
        return 3;
    }
    else if(c == '4')
    {
        return 3;
    }
    else if(c == '5')
    {
        return 4;
    }
    else if(c == '6')
    {
        return 2;
    }
    else if(c == '7')
    {
        return 5;
    }
    else if(c == '8')
    {
        return 1;
    }
    else if(c == '9')
    {
        return 2;
    }
    else
    {
    }
}
    int main()
    {
        string s;
        cin>>s;
        cout<<check(s[0]) * check( s[1]);


        return 0;
    }
