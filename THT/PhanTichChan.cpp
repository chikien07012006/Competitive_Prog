#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
const ll mod=1e9+7;
long long Mod(ll n)
{
    if(n==0)return 1;
    ll s=Mod(n/2);
    if(n%2==0)
    {
        return ((s%mod)*(s%mod))%mod;
    }
    if(n%2==1)
    {
        return ((s%mod)*(s%mod)*(2%mod))%mod;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--){
    ll n; cin>>n;
    cout<<Mod(n/2-1);
    }
}