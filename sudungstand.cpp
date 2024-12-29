#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct ok{ll x,y;};
bool ss(ok trc,ok sau)
{
    if(trc.y==sau.y)return trc.x>sau.x;
    return trc.y<sau.y;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,o=1;cin>>n>>m;ll a[n+5]; ok b[m],c[m];
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=m;i++)cin>>b[i].x>>b[i].y;
    sort(a+1,a+1+n);sort(b+1,b+1+m,ss);
    for(ll i=1;i<=m;i++)
    {
        if(b[i].)
    }
}
