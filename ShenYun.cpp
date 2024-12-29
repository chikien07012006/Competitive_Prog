#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<b;i++)
signed main()
{
    freopen("ShenYun.inp","r",stdin);
    freopen("ShenYun.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll N,x,y; cin>>N>>x>>y;
    ll t=__gcd(x,y);
    cout<<N/(x*y/t);
}
