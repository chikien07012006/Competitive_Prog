#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll nt[1000005];
ll cd[100005],cd1[100005];
void sang()
{
    nt[1]=1;
    For(i,2,1000000)
    {
        if(nt[i]==0)
        {
            for(ll j=i*i;j<=1000000;j=j+i)
            {
                nt[j]=1;
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    sang();
    ll T; cin>>T;
    while(T--){
    memset(cd,0,sizeof(cd));
    memset(cd1,0,sizeof(cd1));
    ll n,e,re=0; cin>>n>>e; ll a[n+5];
    For(i,1,n) cin>>a[i];
    For(i,1,n)
    {
        if(a[i]==1)
        {
            if(i<=e) cd[i]=1;
            else cd[i]=cd[i-e]+1;
        }
    }
    for(ll i=n;i>=1;i--)
    {
        if(a[i]==1)
        {
            if(i+e>n) cd1[i]=1;
            else
                cd1[i]=cd1[i+e]+1;
        }
    }
    For(i,1,n)
    {
        ll trai=0,phai=0;
        if(nt[a[i]]==0)
        {
            if(i<=e) trai =0;
            if(i>e) trai=cd[i-e];
            if(i+e>n) phai =0;
            if(i+e<=n) phai=cd1[i+e];
            re=re+trai+phai+trai*phai;
        }
    }
    cout<<re<<endl;
    }
}
