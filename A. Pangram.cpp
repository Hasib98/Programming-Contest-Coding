//https://codeforces.com/contest/520/problem/A
#include<bits/stdc++.h>

using namespace std;
#define fr(a,b) for( int i = (a) ; i < (b) ; i++)
#define fr0(b) fr(0,b)
#define print(a) cout<<(a)
#define printl(a) cout<<(a)<<endl;


string removeDuplicates(string s, int n)
{
    unordered_map<char, int> exists;

    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (exists.find(s[i]) == exists.end())
        {
            ans.push_back(s[i]);
            exists[s[i]]++;
        }
    }
    return ans;
}

int main()
{
    int n, ascii_range_Counter = 0 ;  //aschii range of A-Z
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    s = removeDuplicates(s, n);
    sort(s.begin(), s.end());
    n = s.size();

    fr0(n)
    {
        if((int)s[i] >= 65 && (int)s[i] <=90)
        {
            ascii_range_Counter++;
        }
        else {}
    }
    if(ascii_range_Counter == 26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;


}
