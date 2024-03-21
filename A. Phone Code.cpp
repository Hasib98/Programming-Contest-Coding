//https://codeforces.com/problemset/problem/172/A
#include<bits/stdc++.h>

using namespace std;
#define print(a) cout<<(a)
#define printl(a) cout<<(a)<<endl;

#define fr(a,b); for( int i = (a) ; i < (b) ; i++)
#define fr0(b) fr(0,b)
#define fr0in(arr,b) fr0(b){cin>>arr[i];}
#define fr0out(arr,b) fr0(b){ printl(arr[i])}


#define sort(b) sort(b,b+(sizeof(b)/sizeof(b[0])))
#define brkl cout<<endl



int main()
{
    int n,cnt = 0;
    cin>>n;

    string s[n];
    fr0in(s,n)
    int sz = s[0].size();


    for( int i = 0 ; i < sz ; i ++ )
    {
        int flag = 0 ;
        for( int j = 1 ; j < n ; j++)
        {
            if(s[j][i] != s[0][i])
            {
                flag = 1;
            }
        }
        if( flag != 1 )
        {
            cnt++;

        }
        else{ break; }
    }
    print(cnt);

    return 0;


}
