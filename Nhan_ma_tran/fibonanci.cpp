#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
const ll mod=1e9+7;
ll a[5][5];
void nhan()
{
    ll x=a[0][0]%mod*a[0][0]%mod+a[1][0]%mod*a[0][1]%mod;
    ll y=a[0][0]%mod*a[0][1]%mod+a[0][1]%mod*a[1][1]%mod;
    ll k=a[1][0]%mod*a[0][0]%mod+a[1][1]%mod*a[1][0]%mod;
    ll z=a[1][0]%mod*a[0][1]%mod+a[1][1]%mod*a[1][1]%mod;
    a[0][0]=x%mod;
    a[0][1]=y%mod;
    a[1][0]=k%mod;
    a[1][1]=z%mod;
}
void nhan1()
{
    ll x=a[0][0]%mod+a[1][0]%mod;
    ll y=a[0][1]%mod+a[1][1]%mod;
    ll k=a[0][0]%mod;
    ll z=a[0][1]%mod;
    a[0][0]=x%mod;
    a[0][1]=y%mod;
    a[1][0]=k;
    a[1][1]=z;
}
void luythua(ll n)
{
    if(n==1) return;
    luythua(n/2);
    nhan();
    if(n%2==1)
    {
        nhan1();
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    if(n==0)
    {
        cout<<0; return 0;
    }
    if(n==1)
    {
        cout<<1; return 0;
    }
    a[0][0]=1; a[0][1]=1; a[1][0]=1; a[1][1]=0;
    luythua(n-1);
    cout<<a[0][0];
}

