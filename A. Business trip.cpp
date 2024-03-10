//https://codeforces.com/problemset/problem/149/A
#include<bits/stdc++.h>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp   = *x;
    *x   = *y;
    *y   =  temp;
}
void insertionSort(int a[], int n)
{
    for( int i = 1 ; i <=n-1 ; i++)
    {
        int j = i;
        while( j > 0  && a[j-1] > a[j])
        {
            swap(a[j],a[j-1]);
            j--;
        }
    }
}
int main()
{
    int n,s = 0, counter = 0;
    cin>>n;
    int arr[12];
    for( int i =0  ; i < 12 ; i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr, 12);
    for( int i = 11   ; i >= 0 ; i--)
    {

        if( s >= n )
        {
            break;
        }
        else
        {
            s = s + arr[i];
            counter++;
        }
    }
    ( s < n ) ? cout<<"-1" : cout<<counter;

    return 0;
}
