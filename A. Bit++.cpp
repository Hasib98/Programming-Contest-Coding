//https://codeforces.com/problemset/problem/282/A
#include <iostream>
using namespace std;

int main()
{
    int t,  x = 0;
    string statement ;
    cin>>t;
    while(t--)
    {
        cin>>statement;
           if( statement == "X++" || statement == "++X" )
        {
            x++;
        }
        else if(statement == "X--" || statement == "--X" )
        {
            x-- ;
        }

        else {}
    }



    cout<<x<<endl;
    return 0;
}
