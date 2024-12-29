#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1000005];
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m; cin>>n>>m;
    dp[1]=1; dp[2]=2; dp[3]=4;
    for(ll i=4;i<=n;i++)
    {
        dp[i]=(dp[i-1]+dp[i-2]+dp[i-3])%m;
    }
    cout<<dp[n];
}