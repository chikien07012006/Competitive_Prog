#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
#define For(i,a,b) for(ll i=a;i<=b;i++) 
vector<ll>u[100005];
ll check[100005];
ll dem[100005];
ll res=0;
ll n,m;
void BFS(ll i)
{
    ll d=0,re=0;
    deque<ll>v;
    v.push_back(i);
    dem[i]=1;
    while(v.size()!=0)
    {
        ll h=v.front();
        For(j,0,u[h].size()-1)
        {
            if(check[u[h][j]]==0)
            {
               v.push_back(u[h][j]); 
               check[u[h][j]]=1;
               dem[u[h][j]]=dem[h]+1;
            }
        }
        v.pop_front();
    }
    For(j,1,n)res=max(re,dem[j]);
    res=max(res,re);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    For(i,1,m)
    {
        ll x,y; cin>>x>>y;
        u[x].push_back(y);
    }
    For(i,1,n)
    {
        BFS(i);
        cout<<res;return 0;
        memset(check,0,sizeof(check));
        memset(dem,0,sizeof(dem));
    }
    cout<<res;
}