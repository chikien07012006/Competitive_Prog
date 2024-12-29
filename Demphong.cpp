#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll n,m,s,t;
vector<ll>f[100005];
ll check[100005],tv[100005];
void truyvet(ll u)
{

    if(tv[u]!=0)
    truyvet(tv[u]);

    cout<<u<<' ';
}
void DFS(ll s)
{
    check[s]=1;

        if(s==t)
        {
            truyvet(s);
        }
    for(auto u:f[s])
    {
        if(check[u]==0)
        {
            tv[u]=s;
            DFS(u);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m>>s>>t;
    For(i,1,m)
    {
        ll a,b; cin>>a>>b;
        f[a].push_back(b);
    }
    For(i,1,n) sort(f[i].begin(),f[i].end());
    DFS(s);
}
