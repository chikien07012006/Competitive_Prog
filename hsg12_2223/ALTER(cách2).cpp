#include<bits/stdc++.h>
using namespace std;
#define ll int
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dp[1000005][5];
ll g[30][5];
ll check[30];
string s;
ll const mod=1000000007;
signed main()
{
    //freopen("ALTER.INP","r",stdin);
    //freopen("ALTER.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin>>s;
    ll re=s.size();
    check[s[0]-'A']=1;
    For(i,1,s.size()-1)
    {
        int x=s[i]-'A';
        check[x]=1;
        For(j,0,x-1)
        {
            if(check[j]==1)
            {
                dp[i][0]=dp[i][0]+g[j][1]+1;
                dp[i][0]%=mod;
            }
        }
        For(j,x+1,25)
        {
            if(check[j]==1)
            {
                dp[i][1]=dp[i][1]+g[j][0];
                dp[i][1]%=mod;
            }
        }
        g[x][0]+=dp[i][0];
        g[x][0]%=mod;
        g[x][1]+=dp[i][1];
        g[x][1]%=mod;
        re+=dp[i][0]+dp[i][1];
        re%=mod;
    }
    cout<<re;
}
