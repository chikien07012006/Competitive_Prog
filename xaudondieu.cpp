#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dp[1000005][5];
ll g[200][5];
ll dem[200];
ll mod=1e9+7;
ll res=0;
signed main()
{
    ios_base::sync_with_stdio(0);
    string n; cin>>n;
    For(i,0,n.size()-1)
    {
        For(j,'A',n[i]-1)
        {
            dp[i][1]=dp[i][1]+g[j][0]+dem[j];
            dp[i][1]%=mod;
        }
        For(j,n[i]+1,'Z')
        {
            dp[i][0]=dp[i][0]+g[j][1];
            dp[i][0]%=mod;
        }
        dem[n[i]]++;
        g[n[i]][0]+=dp[i][0];
        g[n[i]][1]+=dp[i][1];
        g[n[i]][0]%=mod;
        g[n[i]][1]%=mod;
        res=res+dp[i][0]+dp[i][1];
        res%=mod;
    }
    cout<<res+n.size();
}
