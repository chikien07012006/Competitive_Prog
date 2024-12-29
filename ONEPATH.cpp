#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[100005];
ll f[100005],check[100005];
ll flag=0,k=1;
void DFS(ll u,ll v,ll k)
{
    //cout<<u<<' '<<v<<' '<<k<<endl;
    check[u]=1;
    f[k]=u;
    if(u==v)
    {
        For(j,1,k) cout<<f[j]<<' ';
        flag=1;
        return ;
    }
    for(auto t:a[u])
    {
        if(check[t]==0)
        DFS(t,v,k+1);
    }
}
int main()
{
    freopen("ONEPATH.inp","r",stdin);
    freopen("ONEPATH.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,m,u,v; cin>>n>>m>>u>>v;
    For(i,1,m)
    {
        ll l,r;  cin>>l>>r;
        a[l].push_back(r);
        a[r].push_back(l);
    }
    For(i,1,n) sort(a[i].begin(),a[i].end());
    DFS(u,v,k);
    if(flag==0) cout<<-1;
    return 0;
}
