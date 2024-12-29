#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[1000005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,q; cin>>n>>q; ll a[n+5];
    For(i,1,n) cin>>a[i],d[a[i]]=i;
    ll u,v;
    For(i,1,q)
    {
        cin>>u>>v;
        swap(a[d[u]],a[d[v]]);
        swap(d[u],d[v]);
    }
    For(i,1,n) cout<<a[i]<<' ';
}
