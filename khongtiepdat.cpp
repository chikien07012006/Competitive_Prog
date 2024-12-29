#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a1[1005];
signed main()
{
    //freopen("KTIEPDAT.INP","r",stdin);
    //freopen("KTIEPDAT.OUT","w",stdout);
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll n,a,x,b,y; cin>>n>>a>>x>>b>>y;
    For(i,1,n) cin>>a1[i];
    ll dp[n+5][a+5][b+5];
    memset(dp,-1,sizeof(dp));
    dp[x][1][0]=a1[x];
    dp[y][0][1]=a1[y];
    For(i,1,n)
    {
        For(cnta,0,a)
        {
            For(cntb,0,b)
            {
                if(dp[i][cnta][cntb]!=-1)
                {
                    dp[i+x][cnta+1][cntb]=max(dp[i+x][cnta+1][cntb],dp[i][cnta][cntb]+a1[i+x]);
                    dp[i+y][cnta][cntb+1]=max(dp[i+y][cnta][cntb+1],dp[i][cnta][cntb]+a1[i+y]);
                }
            }
        }
    }
    cout<<dp[n][a][b];
}

