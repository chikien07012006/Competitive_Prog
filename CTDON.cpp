#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[100005];
ll flag=0,t,k=1;
ll f[100005],g[100005];
void DFS(ll s,ll k)
{
    for(auto v:a[s])
    {
        if(v==t)
        {
            cout<<k-1<<endl;
            For(i,1,k-1) cout<<g[i]<<' ';
            cout<<t;
            exit(0);
        }
        if(f[v]==0)
        {
            g[k]=v;
            f[v]=s;
            DFS(v,k+1);
        }
    }
}
int main()
{
    freopen("CTDON.inp","r",stdin);
    freopen("CTDON.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,m; cin>>n>>m>>t;
    For(i,1,m)
    {
        ll l,r; cin>>l>>r; a[l].push_back(r);
    }
    g[k]=t;
    DFS(t,k+1);
}

