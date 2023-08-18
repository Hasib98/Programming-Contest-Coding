//https://codeforces.com/problemset/problem/158/A
#include <iostream>
using namespace std;

int main()
{
    int  n,k, score=0, count = 0, previous = 0;
    cin>>n>>k;
    int arr[n];
    for( int i = 0 ; i < n ; i++ )
    {
        cin>>score;
        if(score>0  && ( count<k || previous == score ) ){
            count++;
            previous = score;
        }
    }

    cout<<count;
    return 0;
}
