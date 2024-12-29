#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
const ll INF = 1e18+7;
vector<pair<ll,ll>>a[1005];
ll d[1005],check[1005];
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,s; cin>>n>>m>>s;
    For(i,1,m)
    {
        ll x,y,z; cin>>x>>y>>z;
        a[x].push_back({y,z});
    }
    For(i,0,n) d[i]=1e17;
    d[s]=0;
    For(i,0,n-1)
    {
        ll u,ct=INF;
        For(j,0,n-1)
        {
            if(d[j]<ct&&check[j]==0)
            {
                ct=d[j];
                u=j;
            }
        }
        check[u]=1;
        for(ll x=0;x<a[u].size();x++)
        {
            ll dinh=a[u][x].first,canh=a[u][x].second;
            d[dinh]=min(d[dinh],ct+canh);
        }
    }
    For(i,0,n-1)
    {

        cout<<d[i]<<endl;
    }
}
