//https://codeforces.com/problemset/problem/405/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    vector<int> vec;
    vector<int>::iterator it;
    while(n--)
    {
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    for( it = vec.begin() ; it != vec.end() ; it++)
    {
        cout<<*it<<" ";

    }
    return 0;
}
