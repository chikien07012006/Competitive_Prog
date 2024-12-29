#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll f[1000005],check[1000005];
signed main()
{
   // freopen("SUMX.INP","r",stdin);
   // freopen("SUMX.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,x,re=0; cin>>n; ll a[n+5];
    For(i,1,n)
    {
        cin>>a[i];
    }
    cin>>x;
    For(i,1,n)
    {
        if(a[i]<=x)
        {
            f[a[i]]++;
            re+=f[x-a[i]];
        }
    }
    cout<<re;
}
