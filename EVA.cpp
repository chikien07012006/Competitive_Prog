#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[100005];
ll check[100005],duongdi[100005],lt[100005],kq[100005];
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,x,m; cin>>n>>k;
    For(i,1,n) kq[i]=1e18;
    For(i,1,k)
    {
        cin>>lt[i];
        kq[lt[i]]=0;
    }
    cin>>m;
    For(i,1,m)
    {
        ll x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    For(i,1,k)
    {
        deque<ll>d;
        d.push_back(lt[i]);
        check[lt[i]]=1;
        while(!d.empty())
        {
            ll u=d.front();
            d.pop_front();
            for(auto v:a[u])
            {
                if(check[v]==0)
                {
                    duongdi[v]=duongdi[u]+1;
                    check[v]=1;
                    d.push_back(v);
                    kq[v]=min(kq[v],duongdi[v]);
                }
            }
        }
        memset(duongdi,0,sizeof(duongdi));
        memset(check,0,sizeof(check));
    }
    For(i,1,n) cout<<kq[i]<<' ';
}
