//https://codeforces.com/problemset/problem/266/B
#include<bits/stdc++.h>
using namespace std;
void swap(char *x,char *y)
{
    char temp;
    temp   = *x;
    *x   = *y;
    *y   =  temp;
}

int main()
{
    int n,t;
    string str;
    cin>>n>>t>>str;
    //cout<<n<<c<<str;
    while(t--)
    {
        int i = 0 ;
        while( i <= n )
        {

            if( str[i] == 'B' &&  str[i+1] == 'G')
            {
                swap(  str[i] , str[i+1] );
                i = i + 2;
            }
            else {i++ ;}
        }
    }
    cout<<str;



    return 0;
}
