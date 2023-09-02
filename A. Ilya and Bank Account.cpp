//https://codeforces.com/problemset/problem/313/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if( n < 0 )
    {
        int last_digit =  -1*(n%10);
        int second_last_digit =  -1*(n%100);
        if( second_last_digit > 10*last_digit )
        {
            cout<< (n/100)*10 - last_digit ;
        }
        else
        {
            cout<<n/10;
        }

    }
    else cout<<n;


    return 0;
}



