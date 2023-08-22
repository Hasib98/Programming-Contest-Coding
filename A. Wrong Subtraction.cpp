//https://codeforces.com/problemset/problem/977/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int s;
    cin >> s >> n;
    for( int i = 0 ; i < n ; i++){
        if(s%10 != 0)
        {
            s--;
        }
        else
        {
            s = s/10;
        }
    }
    cout<<s;

    return 0;
}
