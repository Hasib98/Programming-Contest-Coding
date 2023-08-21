//https://codeforces.com/problemset/problem/546/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w,total = 0;
    cin>>k>>n>>w;

    for( int i = 1 ; i <= w ; i++)
    {
        total = k*i + total;
    }
    ( total <= n) ? cout<<"0"<<endl : cout<< total-n<<endl;
    return 0;
}

