#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[100002];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;ll a[n+2],re=0;for(ll i=1;i<=n;i++)cin>>a[i];
    dp[1]=a[1];
    for(ll i=2;i<=n;i++)
    {
        dp[i]=max((dp[i-1]+a[i])/2,a[i]);
        re=max(re,dp[i]);
    }
    cout<<re;
}
