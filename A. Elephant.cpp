//https://codeforces.com/problemset/problem/617/A
#include <bits/stdc++.h>
using namespace std;

int recursion(int num)
{
    if(num <=5)
    {
        return 1;
    }
    else if( num > 5 && num%5 != 0 )
    {
        return ((num/5) + recursion(num%5));
    }
    else
    {
        return num/5;
    }
}


int main()
{
    int num;
    cin>>num;
    cout<<recursion(num);
    return 0;
}

