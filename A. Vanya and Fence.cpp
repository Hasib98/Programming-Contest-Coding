//https://codeforces.com/problemset/problem/677/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,width =  0;
    cin>>n>>h;
    for( int i=0 ; i<n ; i++)
    {
        int height;
        cin>>height;
        if(height > h)
        {
            //cout<<width +2<<endl;
            width = width +2;
        }
        //else cout<< width++<<endl;
        else width++;
    }
    cout<<width<<endl;

    return 0;
}
