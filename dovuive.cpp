#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    //freopen("DOVUIVE.INP","r",stdin);
    //freopen("DOVUIVE.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,k; cin>>n>>k; ll a[n+5];
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n,greater<ll>());
    ll tong=0;
    n++;a[n]=0;
    For(i,1,n-1)
    {
        if(i*(a[i]-a[i+1])<=k)
        {
            tong=tong+i*((a[i]-a[i+1])*(a[i]+a[i+1]+1)/2);
            k=k-i*(a[i]-a[i+1]);
        }
        else
        {
            ll t=k/i+1;
            tong=tong+i*t*(a[i]+a[i]-t+1)/2-(a[i]-t+1)*(t*i-k);
            cout<<tong;
            return 0;
        }
    }
    cout<<tong;
}
