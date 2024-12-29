#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll luythua(ll a, ll n, ll mod)
{
    if(n==1) return a;
    ll s=luythua(a,n/2,mod);
    if(n%2==0) return (s%mod*s%mod);
    if(n%2==1) return (s%mod*s%mod*a%mod);
}
ll mul(ll a,ll b, ll mod)
{
    if (b==1) return a;
    ll t=mul(a,b/2,mod);
    if(b%2==0) return (t%mod+t%mod)%mod;
    if(b%2==1) return (t%mod+t%mod+a%mod)%mod;
}
signed main()
{
  //  freopen("FUNCT.INP","r",stdin);
  //  freopen("FUNCT.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,x,mod; cin>>n>>x>>mod;
    ll h=luythua(2,n,mod)%mod;
    ll tam=mul(x,h,mod)%mod;
    cout<<(tam+(luythua(2,n,mod)%mod-1%mod)%mod)%mod;
}
