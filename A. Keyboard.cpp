//https://codeforces.com/problemset/problem/474/A
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1 = "qwertyuiop", s2 = "asdfghjkl;", s3 = "zxcvbnm,./";
    string position,input;
    cin >> position >> input;
    int x = 1;
    if( position == "L")
    {
        x = x * (-1);
    }
    else {}
    for( int i = 0 ; i < input.size() ; i++)
    {

        if (s1.find(input[i]) != string::npos)
        {
            input[i] = s1[s1.find(input[i])-x];
        }
        else if (s2.find(input[i]) != string::npos)
        {
            input[i] = s2[s2.find(input[i])-x];
        }
        else if (s3.find(input[i]) != string::npos)
        {
            input[i] = s3[s3.find(input[i])-x];
        }



    }
    cout<<input;
    return 0;
}
