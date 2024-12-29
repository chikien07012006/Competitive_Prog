#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[100005];
vector<ll>b;
ll check[100005];
void DFS(ll s)
{
    check[s]=1;
    for(auto v:a[s])
    {
        if(check[v]==0)
        DFS(v);
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,re=0; cin>>n>>k;
    For(i,1,k)
    {
        ll x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    For(i,1,n)
    {
        if(check[i]==0)
        {
            DFS(i);
            b.push_back(i);
            re++;
        }
    }
    cout<<re-1<<endl;
    if(re!=1)
    {
        For(i,0,b.size()-2)
        {
            cout<<b[i]<<' '<<b[i+1]<<endl;
        }
    }
}
