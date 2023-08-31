//https://codeforces.com/problemset/problem/208/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int length = s.size() , i = 0;
    bool checker = false;

    while(  i < length)
    {
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B')
        {
            if(i != 0 && checker)
            {
                cout<<" ";
            }
            i = i + 3 ;
        }
        else
        {
            cout<<s[i];
            checker = true;
            i++;
        }
    }
    return 0;
}
