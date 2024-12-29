#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[15];
ll sinh(ll i, ll n,ll h, ll fl)
{
    ll x=1e18;
    a[1]=9;ll fl1=0;
    for(ll j=0;j<=9;j=j+9)
    {
        if(i==1)a[i]=9;
        else a[i]=j;
        if(i==n)
        {
            ll b=9;
            for(ll i=2;i<=n;i++)b=b*10+a[i];
            if(b%h==0)
            {
                fl=1;
                return b;
            }
        }
        else
        {
            sinh(i+1,n,h,fl);
        }
    }
}
ll scs(ll n)
{
    ll d=0;
    while(n>0)
    {
        d++;
        n=n/10;
    }
    return d;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,fl=0; cin>>n;
    ll d=scs(n);
    while(fl==0)
    {
     sinh(1,d,n,fl);
     d++;
    }
    cout<<sinh(1,d,n,fl);
}

