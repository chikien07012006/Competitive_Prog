#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dp[100005][5];
string s;
ll const mod=1000000007;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>s;
    ll re=s.size();
    For(i,1,s.size()-1)
    {
        For(j,0,i-1)
        {
            if(s[j]>s[i])
            {
                dp[i][1]=dp[j][0]+dp[i][1];
                dp[i][1]=dp[i][1]%mod;
            }
            if(s[j]<s[i])
            {
                dp[i][0]=dp[i][0]+dp[j][1]+1;
                dp[i][0]=dp[i][0]%mod;
            }
        }
        re=(re+dp[i][0]+dp[i][1])%mod;
    }
    cout<<re;
}
