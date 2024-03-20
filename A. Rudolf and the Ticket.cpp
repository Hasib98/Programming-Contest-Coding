//https://codeforces.com/problemset/problem/1941/A
#include<bits/stdc++.h>

using namespace std;
#define fr(a,b) for( int i = (a) ; i < (b) ; i++)
#define fr0(b) fr(0,b)
#define fr0in(arr,b) fr0(b){cin>>arr[i];}
#define fr0out(arr,b) fr0(b){cout<<arr[i];}
#define print(a) cout<<(a)
#define printl(a) cout<<(a)<<endl;

#define sort(b) sort(b,b+(sizeof(b)/sizeof(b[0])))
#define newl cout<<endl


int removeDuplicates(int arr[], int n)
{
    if (n==0 || n==1)
        return n;

    // To store index of next
    // unique element
    int j = 0;

    // Doing same as done in Method 1
    // Just maintaining another updated
    // index i.e. j
    for (int i = 0; i < n - 1; i++)
        if (arr[i] != arr[i + 1])
            arr[j++] = arr[i];

    arr[j++] = arr[n - 1];

    return j;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k, cnt = 0;
        cin>>n>>m>>k;
        int arr[n];
        int arr2[m];
        fr0in(arr,n)
        fr0in(arr2,m)
        fr0(n)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(arr[i] + arr2[j] <= k)
                {
                    cnt++;
                }

            }
        }
        printl(cnt);
    }



    return 0;


}
