//https://codeforces.com/problemset/problem/977/B
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,finalcounter = 0;
    cin>>n;
    string s;
    cin>>s;
    string subs;

    for( int j = 0 ; j < n ; j++)
    {
        int counter = 0;
        for ( int i = 0 ; i < n ; i++)
        {
            if( s.substr(i,2) == s.substr(j,2) )
            {
                counter++;
            }
        }
        if( counter > finalcounter)
        {
            finalcounter = counter;
            subs = s.substr(j,2);
        }
    }
    cout<<subs;
    return 0;
}
