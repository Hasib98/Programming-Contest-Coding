//https://codeforces.com/problemset/problem/1343/A
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n, sum = 0 ;
        cin>>n;
        int i = 2;
        do
        {
            sum = pow(2,i) - 1 ;

            i++;

        }
        while(n % sum != 0);

        cout<<n/sum<<endl;
    }

    return 0;
}
