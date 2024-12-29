#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
struct ok{ll kl,gt;};
ok a[100005],b[100005];
ll ma[100005];
bool sapxep(ok truoc, ok sau)
{
    return truoc.kl<sau.kl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,s,ta=1,tb=1; cin>>n>>s;
    For(i,1,n)
    {
        ll x,y,z; cin>>x>>y>>z;
        if(z==1)
        {
            a[ta].kl=x;
            a[ta].gt=y;
            ta++;
        }
        else
        {
            b[tb].kl=x;
            b[tb].gt=y;
            tb++;
        }
    }
    sort(b+1,b+tb,sapxep);
    ma[0]=-1e18;
    ll tong=0,khoiluong=0;
    For(i,1,tb-1)
    {
        ma[i]=max(ma[i-1],b[i].gt);
    }
    For(i,1,ta-1)
    {
        tong+=a[i].gt;
        khoiluong+=a[i].kl;
    }
    ll t=s-khoiluong,re=tong;
    For(i,1,ta-1)
    {
        ll klma=t+a[i].kl,kq=0;
        ll l=1,r=tb-1;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            if(b[mid].kl>klma)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
                kq=max(kq,mid);
            }
        }
        re=max(re,tong-a[i].gt+ma[kq]);
    }
    cout<<re;
}



