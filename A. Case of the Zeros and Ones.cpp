//https://codeforces.com/problemset/problem/556/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c1 = 0, c0 = 0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            c0++;
        else
            c1++;
    }
    int rm = min(c0, c1);
    cout << n - 2 * rm;

    return 0;
}
