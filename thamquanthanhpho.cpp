#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll n,m;
vector<ll>a[100005];
ll p[100005],d[100005];
bool visit[100005];
ll x,y;
void DFS(ll u)
{
    visit[u]=1;
    for(auto v:a[u])
    {
        if(!visit[u])
        {
            d[v]=d[u]+1;
            p[v]=u;
            DFS(v);
        }
        else
        {
            if(d[v]+2<=d[u])
            {
                 x=v;
                 y=u;
                 return ;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    For(i,1,m)
    {
        ll u,v; cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    DFS(1);
    if(x)
    {
        cout<<d[y]-d[x]+1<<endl;
        int tmp=y;
        while(x!=y)
        {
            cout<<y<<' ';
            y=p[y];
        }
        cout<<x<<' '<<tmp;
    }
    else
        cout<<-1;
}
