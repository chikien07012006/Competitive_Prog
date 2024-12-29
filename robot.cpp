#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[505];
vector<ll>b[505];
ll ktr[505],duongdi[505];
ll BFS(ll s,ll t,vector<ll>a[])
{
    if(s==t) return 0;
    memset(ktr,0,sizeof(ktr));
    memset(duongdi,0,sizeof(duongdi));
    deque<ll>xuli;
    xuli.push_back(s);
    while(!xuli.empty())
    {
        ll u=xuli.front();
        for(auto v:a[u])
        {
            if(ktr[v]==0)
            {
                ktr[v]=1;
                duongdi[v]=duongdi[u]+1;
                if(v==t)
                {
                    return duongdi[v];
                }
                xuli.push_back(v);
            }
        }
        xuli.pop_front();
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,res=0; cin>>n;
    ll m1,m2;
    cin>>m1;
    For(i,1,m1)
    {
        ll u,v; cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    cin>>m2;
    For(i,1,m2)
    {
        ll u,v; cin>>u>>v;
        b[u].push_back(v);
        b[v].push_back(u);
    }
    For(i,1,n)
    {
        For(j,1,n)
        {
            res=res+max(BFS(i,j,a),BFS(i,j,b));
        }
    }
    cout<<res;
}

