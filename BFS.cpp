#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[100005];
deque<ll>d;
ll trace[100005],check[100005],duong[100005];
ll n,m,s,f;
void truyvet(ll s)
{
    if(trace[s]!=0)
    {
        truyvet(trace[s]);
    }
    cout<<s<<' ';
}
int main()
{
    freopen("BFS.inp","r",stdin);
    freopen("BFS.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin>>n>>m>>s>>f;
    For(i,1,m)
    {
        ll u,v; cin>>u>>v;
        a[u].push_back(v);
        //a[v].push_back(u);
    }
    d.push_back(s); check[s]=1; duong[s]=1;
    while(!d.empty())
    {
        ll u=d.front();
        for(auto v:a[u])
        {
            if(check[v]==0)
            {
                duong[v]=duong[u]+1;
                trace[v]=u;
                check[v]=1;
                d.push_back(v);
            }
            if(v==f)
            {
                cout<<duong[v]<<endl;
                truyvet(v);
                return 0;
            }
        }
        d.pop_front();
    }
}








