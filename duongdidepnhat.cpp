#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[1000005];
ll check[100005],trace[100005];
ll n,m,s,t;
void tv(ll u)
{
    if(trace[u]!=0)
    {
        tv(trace[u]);
    }
    cout<<u<<' ';
}
void DFS(ll u)
{
    check[u]=1;
    if(u==t)
    {
        tv(u);
    }
    for(auto v:a[u])
    {
        if(check[v]==0)
        {
            trace[v]=u;
            DFS(v);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m>>s>>t;
    For(i,1,m)
    {
        ll u,v; cin>>u>>v;
        a[u].push_back(v);
    }
    For(i,1,m)  sort(a[i].begin(),a[i].end());
    DFS(s);

}
