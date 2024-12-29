#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<pair<ll,ll>,ll>b;
vector<pair<ll,ll>>a[100005];
ll check[100005],dd[100005];
ll truyvet[100005];
ll ln=-1e18;
void tv(ll n)
{
    while(truyvet[n]!=-1)
    {
        ln=max(ln,b[{truyvet[n],n}]);
        cout<<n<<' '<<b[{truyvet[n],n}]<<endl;
        n=truyvet[n];
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m; cin>>n>>m;
    For(i,1,m)
    {
        ll x,y,z; cin>>x>>y>>z;
        a[x].push_back({y,z});
        b[{x,y}]=z;
    }
    dd[1]=0;truyvet[1]=-1;
    For(i,2,100005) dd[i]=1e18;
    For(i,1,n)
    {
        ll ma=1e18,ct;
        For(j,1,n)
        {
            if(dd[j]<ma&&check[j]==0)
            {
                ma=dd[j];ct=j;
            }
        }

        if(a[ct].size()==0) continue;
        check[ct]=1;
        For(j,0,a[ct].size()-1)
        {
            ll dinh=a[ct][j].first;
            if(dd[ct]+a[ct][j].second<dd[dinh])
            {
                dd[dinh]=a[ct][j].second+dd[ct];
                truyvet[dinh]=ct;
            }
        }
    }
    tv(n);

}
