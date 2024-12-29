#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll ma[1000005],mi[1000005];
signed main()
{
    //freopen("BOBASO.INP","r",stdin);
    //freopen("BOBASO.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; ll a[n+5];
    ma[0]=-1e18;
    For(i,1,n) cin>>a[i],ma[i]=max(ma[i-1],a[i]);
    mi[n+1]=1e18;
    for(ll i=n;i>=1;i--)
    {
        mi[i]=min(mi[i+1],a[i]);
    }
    ll re=-1e18;
    For(i,2,n-1)
    {
        re=max(re,3*ma[i-1]+2*a[i]-5*mi[i+1]);
    }
    cout<<re;
}

