#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;

    cin>>t;
    while(t--)
    {
        cin>>s;
        (s.size() > 10) ?  cout<<s.at(0) << s.size()-2<<s.at(s.size()-1)<< endl : cout<<s<< endl;
    }

}
