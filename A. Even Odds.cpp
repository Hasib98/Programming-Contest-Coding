//https://codeforces.com/problemset/problem/318/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    uint64_t n,k, half;
    cin>>n>>k;
    half = n/2;
    if( n%2 != 0)
    {
        half++;
    }
    if(k <= half)
    {
        cout<<k*2 -1 ;
    }
    else
    {
        cout<<(k - half)*2 ;
    }


    return 0;
}
