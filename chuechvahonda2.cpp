#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k;cin>>n>>k; ll a[n+5],dp[n+5];
    for(ll i=1;i<=n;i++)cin>>a[i];
    dp[1]=0;dp[2]=abs(a[1]-a[2]);
    for(ll i=3;i<=n;i++)
    {
        ll h=i-k,t=1e18;if(h<1)h=1;
        ll f=i-h;
        for(ll j=1;j<=f;j++)
        t=min(dp[i-j]+abs(a[i-j]-a[i]),t);
        dp[i]=t;
    }
    cout<<dp[n];
}

