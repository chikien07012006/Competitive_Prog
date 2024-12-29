#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dp[105][100005];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
    ll n,m; cin>>n>>m; ll w[n+5],v[n+5];
    For(i,1,n) cin>>w[i]>>v[i];
    memset(dp,-1,sizeof(dp));
    dp[1][0]=0;
    if(w[1]<=m)
    {
        dp[1][w[1]]=v[1];
    }
    For(i,1,n-1)
    {
        For(j,0,m)
        {
            if(dp[i][j]!=-1)
            {
                if(j+w[i+1]<=m)dp[i+1][j+w[i+1]]=max(dp[i+1][j+w[i+1]],dp[i][j]+v[i+1]);
                dp[i+1][j]=max(dp[i][j],dp[i+1][j]);
            }
        }
    }
    ll re=0;
    For(i,0,m) re=max(re,dp[n][i]);
    cout<<re;
}
