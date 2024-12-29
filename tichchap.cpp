#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dp[5005][5005];
ll tong[5005][5005];
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
    ll n,re=-1e18; cin>>n; ll a[n+5], b[n+5];
    For(i,1,n) cin>>a[i];
    For(i,1,n) cin>>b[i];
    For(i,1,n)
    {
        For(j,1,n)
        {
            tong[i][j]=tong[i-1][j-1]+a[i]*b[j];
        }
    }
    memset(dp,0x3f,sizeof(dp));
    For(i,1,n)
    {
        For(j,1,n)
        {
            dp[i][j]=min(dp[i-1][j-1],tong[i][j]);
        }
    }
    dp[0][0]=0;
    For(i,1,n)
    {
        For(j,1,n)
        {
            ll tam=tong[i][j]-dp[i-1][j-1];
            re=max(re,tam);
        }
    }
    cout<<re;
    }
