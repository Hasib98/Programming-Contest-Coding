//https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string string_1, string_2;
    cin >> string_1 >> string_2;

    transform(string_1.begin(), string_1.end(), string_1.begin(), ::tolower);
    transform(string_2.begin(), string_2.end(), string_2.begin(), ::tolower);

    for ( int i = 0 ; i < string_1.size() ; i ++ )
    {
        if(string_1[i] > string_2[i]){
            cout<<"1"<<endl;
            break;
        }
        else if(string_1[i] < string_2[i]){
            cout<<"-1"<<endl;
            break;
        }
        else{
            if(i == string_1.size()-1 )
            {
               cout<<"0"<<endl;
            }
        }
    }
    return 0;
}
