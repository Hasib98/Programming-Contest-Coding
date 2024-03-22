//https://codeforces.com/problemset/problem/421/A
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

bool isInsideArray( int A[], int n, int k ){
   for( int i = 0; i < n; i++) {
      if( A [ i ] == k ) {
         return true;
      }
   }
   return false;
}

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int arr1[a], arr2[b];
    fr0in(arr1,a)
    fr0in(arr2,b)

    for( int i = 1 ; i <= n ; i ++)
    {
        if(isInsideArray(arr1,a,i))
        {
            cout<<1<<" ";
        }
        else if(isInsideArray(arr2,b,i))
        {
            cout<<2<<" ";
        }
        else{ cout<<1<<" ";}
    }
    return 0;
}
