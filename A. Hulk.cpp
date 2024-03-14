//https://codeforces.com/problemset/problem/705/A
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    string s1= "that I love ";
    string s2 = "that I hate ";


    cout<<"I hate ";
    for( int i = 2 ; i <= n ; i++)
    {
        if (i % 2 == 0)
        {
            cout << s1;
        }
        else
        {
            cout << s2;
        }
    }

    cout<<"it";
    return 0;
}
