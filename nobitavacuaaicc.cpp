#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[100005];
map<ll,ll>check;
ll n,k;
ll cal(ll xuli)
{
    ll dem=0;
    For(i,1,n)
    {
        ll l=i+1,r=n,mid=-1,tam=-1;
        //a[i]*xet<=xuli => xet<=xuli/a[i];
        ll xet=xuli/a[i];
        //cout<<xet<<endl;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]<xet)
            {
                tam=max(tam,mid);
                l=mid+1;
            }
            if(a[mid]>=xet)
            {
                r=mid-1;
            }
        }
        if(tam!=-1)
        {
            dem+=(tam-i);
        }
    }
    return dem;
}
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
    ll tam=0,re=0,re1=1e18;
    cin>>n>>k;
    For(i,1,n) cin>>a[i],tam=max(tam,a[i]),check[a[i]]=1;
    sort(a+1,a+1+n);
    ll l=1,r=tam*tam;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(cal(mid)<=k-1)
        {
            re=max(re,mid);
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    ll l1=1,r1=tam*tam;
    while(l1<=r1)
    {
        ll mid=(l1+r1)/2;
        if(cal(mid)>=k-1)
        {
            re1=min(re1,mid);
            r1=mid-1;
        }
        else
        {
            l1=mid+1;
        }
    }
    cout<<cal(5156527030)<<' '<<cal(5156506368)<<endl;
    if(re1==1e18) re1=re;
    For(i,re1,re)
    {
        For(j,1,n)
        {
            ll t=i/a[j];
            if(t*a[j]!=i) continue;
            if(check[t]==1)
            {
                cout<<i; return 0;
            }
        }
    }
}
