//https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[5][5], Index_i, Index_j;


    for ( int i = 0 ; i < 5 ; i ++ )
    {
        for ( int j = 0 ; j < 5 ; j ++)
        {
            cin>>matrix[i][j];
            if( matrix[i][j] == 1)
            {
                Index_i = i ;
                Index_j = j ;
            }
        }
    }
    cout<< abs(Index_i -2) + abs(Index_j -2)<<endl;



    return 0;
}
