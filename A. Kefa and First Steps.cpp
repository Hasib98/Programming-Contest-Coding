//https://codeforces.com/problemset/problem/580/A
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,counter = 0,prev = 0,current, prev_count=0;
    cin>>n;
    for( int i = 0 ; i < n ; i++)
    {
        cin>>current;
        if(current >=  prev)
        {
            if(prev != 0)
            {
                counter++;
               // cout<<prev_count+1<<"\t";
            }
            prev = current;
        }
        else
        {
            if(prev_count < counter)
            {
                prev_count = counter;
            }

            counter = 0;
            prev = current;
        }
    }


    ( prev_count >= counter ) ? cout<<prev_count+1 : cout<<counter+1;
    cout<<endl;


    cout<<prev_count+1<<endl;
    cout<<counter+1<<endl;

    return 0;
}
