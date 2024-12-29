#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll n,m,k,re,t=1e18,t1=1e18; cin>>n>>m>>k; ll a[n+5],b[m+5];
    For(i,1,n) cin>>a[i],t=min(t,a[i]);
    For(i,1,m) cin>>b[i],t1=min(t1,b[i]);
    re=t+t1;
    For(i,1,k)
    {
        ll x,y,c; cin>>x>>y>>c;
        if(x<=n&&y<=m)
        {
            re=min(re,a[x]+b[y]-c);
        }
    }
    cout<<re;
}
