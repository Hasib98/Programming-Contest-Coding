//https://codeforces.com/problemset/problem/1475/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int64_t n;
        cin>>n;
        while( n!=0)
        {
            // cout<<n%2;
            if( n != 1 && n%2 == 1)
            {
                cout<<"YES"<<endl;
                break;
            }
            else
            {
                n = n/2;
                if(n == 0)
                {
                    cout<<"NO"<<endl;
                }
            }
        }

    }


    return 0;
}



