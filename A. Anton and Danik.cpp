//https://codeforces.com/problemset/problem/734/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n , counter = 0 ;
    string s;
    cin>>n >>s;
    for( int i = 0 ; i < s.size() ; i++ )
    {
        if(s[i] == 'A')
        {
            counter++;
        }
        else if(s[i] == 'D')
        {
            counter--;
        }

    }
    if( counter < 0)
    {
        cout<<"Danik" ;
    }
    else if( counter > 0)
    {
        cout<<"Anton" ;
    }
    else
        cout<<"Friendship" ;
    return 0;
}
