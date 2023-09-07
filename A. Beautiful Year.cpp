//https://codeforces.com/problemset/problem/271/A
#include<bits/stdc++.h>
using namespace std;
int recur( int year)
{
    year++;
    int x = year %10 ;
    int y = (year/10) % 10;
    int z = (year/100) % 10;
    int k = (year/1000) % 10;

    if( x != y)
    {
        if(x!=z && y!=z)
        {
            if(x != k && y != k && z != k )
            {
                return year;
            }
            else
            {
                return recur(year);
            }
        }
        else
        {
            return recur(year);
        }
    }
    else
    {
        return recur(year);
    }
}
int main()
{

    int year;
    cin>>year;
    cout<<recur(year);

    return 0;
}
