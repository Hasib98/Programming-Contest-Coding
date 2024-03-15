//https://codeforces.com/problemset/problem/1328/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int n;
    cin>>n;

    while(n--)
    {
        ll a,b,counter = 0;
        cin>>a>>b;
        if( a>b && a%b !=0)
        {
            counter = b - (a%b);

        }
        else if(a <b)
        {
            counter = b-a;
        }
        else {}
        cout<<counter<<endl;
    }
    return 0;
}
