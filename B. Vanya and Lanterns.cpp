//https://codeforces.com/problemset/problem/492/B
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,l,d;
    cin>>n>>l;
    int arr[n];
    for( int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
     d = max(arr[0] , l-arr[n-1]) * 2;


    for( int i = 0 ; i < n-1 ; i++)
    {
        d = max( d , arr[i+1] - arr[i]);

    }

    cout.precision(10);
    cout << fixed << d / 2.0 << endl;

    return 0;
}
