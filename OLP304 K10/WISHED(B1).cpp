#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[100005];
ll check[100005];
void DFS(ll i)
{
    cout<<i<<endl;
    check[i]=1;
    for(auto v:a[i])
    {
        if(check[v]==0)
        {
            DFS(v);
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,re=0; cin>>n>>m;
    For(i,1,m)
    {
        ll x,y; cin>>x>>y;
        a[x].push_back(y);
    }
    For(i,1,n)
    {
        if(check[i]==0)
        {
            re++;
            DFS(i);
            cout<<endl;
        }
    }
    cout<<re;
}
