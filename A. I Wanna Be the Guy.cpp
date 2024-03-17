//https://codeforces.com/problemset/problem/469/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string s = "I become the guy.";
    int a;
    cin>> a;
    int arr1[a];
    for(int i = 0 ; i < a ; i++)
    {
        cin>>arr1[i];
    }
    int b;
    cin>> b;
    int arr[a+b];
    for(int i = 0 ; i < a+b ; i++)
    {
        if( i < a)
        {
            arr[i] = arr1[i];
        }
        else
        {
            cin>>arr[i];
        }
    }
    sort(arr, arr+a+b);
    if( arr[0] != 1 || arr[a+b-1] != n)
    {
        s = "Oh, my keyboard!";
    }
    else
    {

        for( int i = 1 ; i < a+b ; i++)
        {
            if(arr[i] - arr[i-1] > 1)
            {
                s = "Oh, my keyboard!";
                break;
            }
        }
    }
    cout<<s;
    return 0;
}
