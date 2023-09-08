//https://codeforces.com/problemset/problem/1374/B
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int64_t n,counter = 0;
        cin>>n;
        while(n != 1 )
        {
            if( n%6 == 0)
            {
                n = n / 6 ;
                if(n <= 0)
                {
                    counter = -1;
                    break;
                }

                counter++;
            }
            else
            {
                n = n * 2 ;

                counter++;
            }
        }
        cout<<counter<<endl;
    }

    return 0;
}
