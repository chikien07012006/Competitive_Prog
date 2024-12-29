#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll f[1000005],d[1000005];
void sang()
{
    d[1]=1;
    For(i,2,1000005)
    {
        if(d[i]==0)
        {
            for(ll j=i*i;j<=100005;j=j+i) d[j]=1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    ll n,mi=1e18,re=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i],f[i]=f[i-1]+a[i];
    sang();
    For(i,1,n)
    {
        if(d[i]==0)
        {
            mi=min(mi,f[i-1]);
            re=max(re,f[i]-mi);
        }
    }
    if(re==0) cout<<-1;
    else
    cout<<re;
}



