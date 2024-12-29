#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>d1[1000005];
map<vector,ll>d[1000005];
signed main()
{
    freopen("SSEQ.INP","r",stdin);
    freopen("SSEQ.out","w",stdout);

    ios_base::sync_with_stdio(0);
    ll n,re=0,ma=-1e12,mi=1e12; cin>>n;
    For(i,1,n)
    {
        ll a,b,c; cin>>a>>b>>c;
        ma=max(ma,max(a,b));
        mi=min(mi,min(a,b));
        d[a][b]=c;
        d1[b].push_back(a);
    }
    For(i,mi,ma)
    {
        ll tong=0;
        For(j,i,ma)
        {
            for(auto k:d1[j])
            {
                if(k>=i)
                {
                    tong+=d[k][j];
                    re=max(re,tong);
                }
            }
        }
    }
    cout<<re;
}
