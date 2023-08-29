//https://codeforces.com/problemset/problem/160/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x, total = 0,counter = 0;
    cin>>t;
    vector<int> vec;


    for( int i = 0 ; i < t; i++)
    {
        cin>>x;
        vec.push_back(x);
        total = total + vec[i];
    }
    sort(vec.begin(), vec.end(), greater<int>());
    int i;
    for(i = 0 ; total/2 >= counter; i++)
    {
        counter = counter + vec[i];
    }
        cout<<i;
  return 0;
}
