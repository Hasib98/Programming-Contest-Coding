//https://codeforces.com/problemset/problem/200/B
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,s = 0;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin>>x;
        s = s + x;
    }
    cout.precision(12);
    cout<<fixed<<(double)s/n;
    return 0;
}
