//https://codeforces.com/problemset/problem/110/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int64_t n, counter = 0;
    cin>>n;
    while(n/10 != 0)
    {
        if(n % 10 == 7 || n % 10 == 4 )
        {
            counter++;
        }

        n = (n - (n%10))/10;
        if(n/10 == 0 && ( n == 7 || n == 4))
        {
            counter++;
        }
    }
    if( counter == 7 || counter == 4)
    {
        cout<<"YES";
        counter++;
    }
    else cout<<"NO";

    return 0;
}
