#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[2*100005];
ma
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m; cin>>n>>m;
    For(i,1,m)
    {
        ll x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    ll q; cin>>q;
    while(q--)
    {
        ll x; cin>>x;
        if(x==1)
        {
            ll u,v; cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        if(x==2)
        {
            vector<ll>k;
            ll fl=0,u,v; cin>>u>>v;
            for(auto h:a[u])
            {
                if(h==v)
                {
                    fl=1;
                    cout<<"YES"<<endl;
                    break;
                }
                k.push_back(h);
            }
            if(fl==0)
            {
                for(auto h:k)
                {
                    for(auto c:a[h])
                    {
                        if(c==v)
                        {
                            fl=1;
                            cout<<"YES"<<endl;
                            break;
                        }
                    }
                    if(fl==1) break;
                }
                if(fl==0) cout<<"NO"<<endl;
            }
        }
    }
}

