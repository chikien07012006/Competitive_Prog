#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[3005][3005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m;cin>>n>>m;char t;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>t;if(i==1&&j==1)dp[i][j]=1;
            else{
            if(t=='.')dp[i][j]=(dp[i-1][j]+dp[i][j-1])%(1000000007);
            else dp[i][j]=0;}
        }
    }
    cout<<dp[n][m];
}
