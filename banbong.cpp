#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,k,re=0; cin>>n>>m>>k; ll a[n+5];
    For(i,1,n)
    {
        ll t; cin>>a[i]>>t;
        if(t>m) a[i]+=(t-m);
    }
    sort(a+1,a+1+n);
    ll tam=0;
    For(i,1,n)
    {
        tam+=a[i];
        if(tam<=k)
        {
            re++;
        }
    }
    cout<<re;
}
