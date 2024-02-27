//https://codeforces.com/problemset/problem/116/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a=0,b=0,capacity=0, maxcap = 0;
    cin>>n;
    for( int i=0 ; i<n ; i++)
    {

        cin>>a>>b;

        capacity = (capacity-a) + b;
        if(maxcap < capacity)
        {
            maxcap = capacity;
        }
    }
    cout<<maxcap<<endl;

    return 0;
}
