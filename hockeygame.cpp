#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[999999];
unsigned long long m;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n>>m;
    dp[1]=1; dp[2]=2; dp[3]=4;
    for(ll i=4;i<=n;i++)
    {
        dp[i]=(dp[i-1]%m+dp[i-2]%m+dp[i-3]%m)%m;
    }
    cout<<dp[n];
}
