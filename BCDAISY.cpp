#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[300];
ll f[300];
void DFS(ll s)
{
    f[s]=1;
    for(auto v:a[s])
    {
        if(f[v]==0)
        {
            DFS(v);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,re=0,fl=0; cin>>n>>m;
    For(i,1,m)
    {
        ll u,v; cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    DFS(1);
    For(i,1,n)
    {
        if(f[i]==0){cout<<i<<endl;fl=1;}
    }
    if(fl==0) cout<<0;
}






