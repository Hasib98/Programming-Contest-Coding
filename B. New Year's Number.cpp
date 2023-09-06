//https://codeforces.com/problemset/problem/1475/B
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int  mod = n % 2020;
        int div = n / 2020;

        if( mod <= div){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
