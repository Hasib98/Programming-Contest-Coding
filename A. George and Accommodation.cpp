//https://codeforces.com/problemset/problem/467/A
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,counter(0);
    cin>>n;
    while(n--)
    {
        int p,q;
        cin>>p>>q;
        if(q-p>=2)
        {
            counter++;
        }
    }
    cout<<counter;

    return 0;
}
