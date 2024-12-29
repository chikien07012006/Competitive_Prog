#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[55];
ll dotre[55][55];
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,k; cin>>n>>m>>k;
    For(i,1,m)
    {
        ll u,v,c; cin>>u>>v>>c;
        a[u].push_back(v);
        a[v].push_back(u);
        a[u][v]=c; a[v][u]=c;
    }
    For(i,1,50)
    {
        cout<<i<<endl;
        for(auto v:a[i]) cout<<v<<' ';
        cout<<endl;
    }
}