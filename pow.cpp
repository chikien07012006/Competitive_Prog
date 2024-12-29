#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
long long pow(long long a, long long b, long long c)
{
    if(b==1){return a;}
    else
    {
        long long s=pow(a,b/2,c);
        if(b%2==0)
        {
            return (s%c*s%c)%c;
        }
        else
        {
            return (s%c*s%c*a%c)%c;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T; while(T--){
    ll a,m,b,n,k; cin>>a>>m>>b>>n>>k;
    cout<<pow(a,m,k)<<endl;}
}



