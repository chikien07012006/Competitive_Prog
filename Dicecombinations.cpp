#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll m=1e9+7;
ll f[1000005];
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    f[1]=1;
    ll kq=1;
    For(i,2,6)
    {
        kq=(kq*2)%m;
        f[i]=kq;
    }
    For(i,7,n)
    {
        f[i]=(f[i-1]+f[i-2]+f[i-3]+f[i-4]+f[i-5]+f[i-6])%m;
    }
    cout<<f[n];
}
