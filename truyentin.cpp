#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[1000];
ll check[1000],d[1000];
void DFS(ll u)
{
    for(auto v:a[u])
    {
        if(check[v]==0)
        {
            check[v]=1;
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
    }
    For(i,1,n)
    {
        if(check[i]==0)
        {
            check[i]=1;
            d[i]=1;
            DFS(i);
        }
    }
    memset(check,0,sizeof check);
    for(ll i=n;i>=1;i--)
    {
        if(d[i]==1&&check[i]==0)
        {
            re++;
            DFS(i);
        }
    }
    cout<<re;
}











