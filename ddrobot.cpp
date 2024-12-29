#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dp[105][105];
ll check[105][105];
signed main()
{
  //  freopen("robot.INP","r",stdin);
  //  freopen("robot.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,m; cin>>n>>m;
    while(m--)
    {
        ll u,v; cin>>u>>v;
        check[u][v]=-1;
    }
    dp[1][1]=1;
    For(i,1,n)
    {
        For(j,1,n)
        {
            if(check[i][j]!=-1)
            {
                if(check[i+1][j]!=-1)dp[i+1][j]+=dp[i][j];
                if(check[i][j+1]!=-1)dp[i][j+1]+=dp[i][j];
            }
        }
    }
    cout<<dp[n][n];
}
