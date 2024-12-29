#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[100005];
deque<ll>d;
ll check[100005],dem[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m; cin>>n>>m;
    For(i,1,m)
    {
        ll u,v; cin>>u>>v;
        a[u].push_back(v); a[v].push_back(u);
    }
    check[1]=1; dem[1]=1; d.push_back(1);
    while(!d.empty())
    {
        ll u=d.front(); d.pop_front();
        for(auto v:a[u])
        {
            if(check[v]==0)
            {
                check[v]=1;
                dem[v]=dem[u]+1;
                d.push_back(v);
            }
            if(v==n)
            {
                cout<<dem[v]; return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE"; return 0;
}








