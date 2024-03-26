//https://codeforces.com/contest/1431/problem/A
import java.util.Scanner
 
fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
 
    repeat(t) {
        val n = scanner.nextInt()
        var s = 0L
        val arr = LongArray(n)
 
        for (i in 0 until n) {
            arr[i] = scanner.nextLong()
        }
        arr.sort()
 
        for (i in arr.indices) {
            if (i > 0 && arr[i] == arr[i - 1]) {
                continue
            }
            var sum = 0L
            sum = arr[i] * (n - i)
            if (sum > s || s == 0L) {
                s = sum
            }
        }
 
        println(s)
    }
}


// C++ Code 

/*
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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long int s= 0;
        cin>>n;
        long long int arr[n];
        fr0in(arr,n)
        sort(arr);
        for(int i = 0 ; i < n ; i ++)
        {
            if( i < 0 && arr[i] == arr[i-1])
            {
                continue;
            }
            long long int sum =0 ;
            sum = arr[i] * ( n-i);
            if( sum > s || s == 0)
            {
                s = sum;
            }
        }

        cout<<s<<endl;
    }



    return 0;
}

*/