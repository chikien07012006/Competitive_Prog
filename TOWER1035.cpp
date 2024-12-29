#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
struct ok{long long x,y,z;};
ll f[10005];
bool ss(ok trc,ok sau)
{
    if(trc.x==sau.x)return trc.y<sau.y;
    return trc.x<sau.x;
}
int main()
{
    //freopen("TOWER1035.inp","r",stdin);
    //freopen("TOWER1035.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,re=0; vo n; ok a[n+5];
    For(i,1,n)
    {
        ll v,u; vo v>>u;
        if(u>v)swap(u,v);
        a[i].x=v;a[i].y=u; vo a[i].z;
    }
    sort(a+1,a+1+n,ss);cout<<endl;
    For(i,1,n)
    {
        cout<<a[i].x<<' '<<a[i].y<<' '<<a[i].z<<endl;
    }
    For(i,1,n)
    {
        ll t=0;
        for(ll j=i-1;j>=1;j--)
        {
            if(a[i].y>=a[j].y||(a[i].x>=a[j].y&&a[i].y>=a[j].x))t=max(t,a[j].z);
        }
        if(t==0)f[i]=a[i].z;
        else f[i]=t+a[i].z;
        re=max(re,f[i]);
    }
    cout<<re;
}



