#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stiod(0);
    ll n,m,d=0; cin>>n>>m; ll a[n+5];
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    For(i,1,n-1) cin>>a[i];{
        d=max(d, a[i+1]-a[i]);
    }
    if(n>m)
    {

    }
}
