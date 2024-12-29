#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[100005];
ll f[100005];
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
    ll n,m,re=0; cin>>n>>m;
    For(i,1,m)
    {
        ll u,v; cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    For(i,1,n)
    {
        if(f[i]==0)
        {
            re++;
            DFS(i);
        }
    }
    cout<<re;
}





