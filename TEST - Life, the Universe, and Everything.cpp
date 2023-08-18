//https://www.spoj.com/problems/TEST/
#include <iostream>
using namespace std;

int main()
{
    int x=0;
    for( ; ; )
    {
        cin>> x ;
        if( x!=42){
            cout<<x<<endl;
        }
        else{
            break;
        }

    }

    return 0;
}
