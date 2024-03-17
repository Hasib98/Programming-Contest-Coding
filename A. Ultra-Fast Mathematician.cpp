//https://codeforces.com/problemset/problem/61/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr1,arr2,arr_ans;
    cin>>arr1>>arr2;
    for( int i = 0 ; i < arr1.size() ; i++)
    {
        if(arr1[i]!=arr2[i])
        {
            cout<<"1";
        }
        else
        {
            cout<<"0";
        }
    }

    return 0;
}
