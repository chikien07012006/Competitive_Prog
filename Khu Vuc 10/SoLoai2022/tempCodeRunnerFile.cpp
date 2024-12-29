#include<bits/stdc++.h>
using namespace std;
long long dem[100005],dp[100005];
signed main()
{
    ios_base::sync_with_stdio(0);
    long long n,q; cin>>n>>q; long long a[n+5];
    for(long long i=1;i<=n;i++) cin>>a[i];
    for(long long i=1;i<=n;i++)
    {
        long long ma=0;
        for(long long j=1;j<i;j++)
        {
            if(a[j]==a[i]/q)
            {
                ma=max(ma,dp[j]);
            }
        }
        dp[i]=ma+1;
    }
    for(long long i=1;i<n;i++) 
    {
        long long re=0;
        for(long long j=1;j<=n;j++)
        {
            if(dp[j]>=i+1)re++;
        }
        cout<<re<<' ';
    }
}