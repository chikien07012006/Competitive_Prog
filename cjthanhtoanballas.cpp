#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[1000005];
ll check[100005],trace[100005];
vector<ll>z;
ll n,m,s,t;
void tv(ll u)
{
    if(trace[u]!=0)
    {
        tv(trace[u]);
    }
    cout<<u<<' ';
}
void BFS(ll u)
{
    queue<ll>q;
    q.push(s);
    check[s]=1;
    while(!q.empty())
    {
        ll u=q.front();
        if(u==t)
        {
            tv(u);
            exit(0);
            return;
        }
        q.pop();
        for(auto v:a[u])
        {
            if(check[v]==0)
            {
                q.push(v);
                check[v]=1;
                trace[v]=u;
            }
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
    BFS(s);

}
