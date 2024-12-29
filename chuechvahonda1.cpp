#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n; ll a[n+5],dp[n+5];
    for(ll i=1;i<=n;i++)cin>>a[i];
    dp[2]=abs(a[1]-a[2]);dp[3]=min(abs(a[1]-a[3]),dp[2]+abs(a[2]-a[3]));
    for(ll i=4;i<=n;i++)
    {
        dp[i]=min(dp[i-1]+abs(a[i-1]-a[i]),dp[i-2]+abs(a[i-2]-a[i]));
    }
    cout<<dp[n];
}
