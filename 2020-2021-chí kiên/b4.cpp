#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
const ll N=100+5;
ll a[N],f2[N],f5[N],check[N],ans=0,dem2=0,dem5=0;
void log2(ll i,ll n)
{
    while(n%2==0)
    {
        f2[i]++;
        n=n/2;
    }
}
void log5(ll i,ll n)
{
    while(n%5==0)
    {
        f5[i]++;
        n=n/5;
    }
}
void dequy(ll pos, ll n, ll k)
{
    For(i,1,n)
    {
        if(check[i]==0)
        {
            check[i]=1;
            dem2+=f2[i];
            dem5+=f5[i];
            if(pos==k)
            {
                ans=max(ans,min(dem2,dem5));
            }
            else
            {
                dequy(pos+1,n,k);
            }
            check[i]=0;
            dem2-=f2[i];
            dem5-=f5[i];
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll n,k; cin>>n>>k;
    For(i,1,n)
    {
        cin>>a[i];
        log2(i,a[i]);
        log5(i,a[i]);
    }
    dequy(1,n,k);
    cout<<ans;
}
