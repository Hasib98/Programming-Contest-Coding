//https://www.spoj.com/problems/ARITH/
using namespace std;
int main()
{
    int t,Count = 0;
    bool Petya, Vasya , Tonya ;

    cin>>t;

    while(t--)
    {
        cin>> Petya >>  Vasya  >> Tonya ;
        if(  (Petya && (Vasya || Tonya)) || ((Petya || Vasya) && Tonya)  ){
            Count++;
        }
    }
    cout<<Count<<endl;
}
