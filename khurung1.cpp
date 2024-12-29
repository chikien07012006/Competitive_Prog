#include<iostream>
#define ll long long
using namespace std;
ll dp[1002][1002],dp1[1002][1002];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,k;
    cin>>n>>m>>k;ll a[n+2][m+2];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
        for(int j=1;j<=m;j++)dp[1][j]=a[1][j];
        for(int i=k;i<=n;i++)
}
