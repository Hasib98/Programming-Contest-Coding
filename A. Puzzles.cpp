//https://codeforces.com/problemset/problem/337/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans = 0;
    cin>>n>>m;
    int arr[m];
    for( int i = 0; i < m ; i++)
    {
        cin>> arr[i];
    }
    sort(arr,arr+m,  greater<int>());
    for(int i = 0 ; i < m ; i++)
    {
        if((arr[i]-arr[i+n-1] < ans &&  i+n-1 < m ) || i == 0 )
        {
            ans = arr[i]-arr[i+n-1] ;
        }
    }
    cout<<ans;

    return 0;
    }
