//https://codeforces.com/problemset/problem/136/A
#include<bits/stdc++.h>
using namespace std;

int findIndex(int arr[], int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i; // Found the value, return its index
        }
    }
    return -1; // Value not found in the array
}
int main()
{

    int n;
    cin>>n;
    int arr[n];
    int arr2[n];
    for ( int i = 0 ; i < n ; i++ )
    {
        cin>>arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2, arr2+n);
    for ( int i = 0 ; i < n ; i++ )
    {
        cout<<findIndex(arr, n, arr2[i]) + 1 <<" ";
    }



    return 0;
}
