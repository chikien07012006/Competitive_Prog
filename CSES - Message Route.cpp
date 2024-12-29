#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[100005];
vector<ll>b;
ll dd[100005],dd1[100005],check[100005];
void truyvet(ll n)
{
    while(dd[n]!=1)
    {
        b.push_back(dd[n]);
        n=dd[n];
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,k; cin>>n>>k;
    For(i,1,k)
    {
        ll x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    check[1]=1;
    deque<ll>d;
    dd1[1]=1;
    d.push_back(1);
    while(!d.empty())
    {
        ll u=d.front();
        d.pop_front();
        for(auto v:a[u])
        {
            if(check[v]==0)
            {
                d.push_back(v);
                check[v]=1;
                dd[v]=u;
                dd1[v]=dd1[u]+1;
            }
        }
    }
    if(dd[n]==0){cout<<"IMPOSSIBLE"; return 0;}
    else
    {
        cout<<dd1[n]<<endl;
        truyvet(n);
    }
    cout<<1<<' ';
    for(ll i=b.size()-1;i>=0;i--) cout<<b[i]<<' ';
    cout<<n;
}

