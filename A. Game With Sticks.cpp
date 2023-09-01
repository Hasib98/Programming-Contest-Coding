//https://codeforces.com/problemset/problem/451/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans = 0;
    cin>>n>>m;

    if( (n%2 != 0 && (m%2!=0 || n<=m)) || m == 1 || n == 1  || (n % 10 == 0 && n-m == 1) )
    {
        cout<<"Akshat";
    }
    else
    {
        cout<<"Malvika";
    }

// this is more optimal solution
    /*  if (n > m)
      {
          swap(n, m);
      }
      if (n % 2 == 0)
      {
          cout << "Malvika" << endl;
      }
      else
      {
          cout << "Akshat" << endl;
      }*/
    return 0;
}



