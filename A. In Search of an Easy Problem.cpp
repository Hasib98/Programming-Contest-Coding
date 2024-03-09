//https://codeforces.com/problemset/problem/1030/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    bool complexity = 0;
    string s = "EASY";
    cin>>n;
    while(n--)

    {
        cin>>complexity;
        if(complexity)
        {
            s = "HARD";
        }
        else {}
    }

    cout<<s;

    return 0;
}
