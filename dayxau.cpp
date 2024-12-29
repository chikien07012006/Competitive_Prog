#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[3*100000+5][25];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k;cin>>n>>k;string a[n+5];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        dp[i][a[i].size()]=dp[i-1][a[i].size()]+1;
        for(ll j=2;j<=20;j++)
        {
            if(j!=a[i].size())dp[i][j]=dp[i-1][j];
        }
    }
    ll res=0;
    for(ll i=1;i<n;i++)
    {
        if(i+k<=n)res=res+(dp[i+k][a[i].size()]-dp[i][a[i].size()]);
        else res=res+(dp[n][a[i].size()]-dp[i][a[i].size()]);
    }
    cout<<res;
}
