#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=1e18; cin>>n; ll a[n+5],b[n+5];
    For(i,1,n) cin>>a[i];
    For(i,1,n) cin>>b[i];
    sort(b+1,b+1+n);
    For(i,1,n)
    {


        ll t=lower_bound(b+1,b+1+n,0-a[i])-b;
        if(t==1) re=min(re,abs(a[i]+b[t]));
        else re=min(re,min(abs(a[i]+b[t]),abs(a[i]+b[t-1])));
    }
    cout<<re;
}


