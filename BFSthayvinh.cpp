#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[100005];
ll f[100005],fl=0,t,re=0;
deque<ll>b;
void BFS(ll s)
{
    for(auto v:a[s])
    {
        if(v==t)
        {
            fl=1; return ;
        }
        if(f[v]==0)
        {
            f[v]=1;
            b.push_back(v);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,d=0,s; cin>>n>>m>>s>>t;
    For(i,1,m)
    {
        ll u,v; cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    b.push_back(s);  f[s]=1;
    while(fl==0)
    {
        BFS(b.front());
        re++;
        b.pop_front();
    }
    cout<<re;
}







