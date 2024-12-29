#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dp[1000005];
deque<ll>xuli;
signed main()
{
    freopen("DIVISOR.INP","r",stdin);
    freopen("DIVISOR.OUT","w",stdout);
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll s,h; cin>>s>>h;
    memset(dp,-1,sizeof(dp));
    xuli.push_back(s);
    dp[s]=0;
    while(!xuli.empty())
    {
        ll t=xuli.front();
        for(ll i=2;i*i<=t;i++)
        {
            if(t%i==0)
            {
                if(t+i>h) break;
                if(dp[t+i]!=-1) dp[t+i]=min(dp[t+i],dp[t]+1);
                if(dp[t+i]==-1)
                {
                    dp[t+i]=dp[t]+1;
                    xuli.push_back(t+i);
                }
                if(t+t/i>h) continue;
                if(dp[t+t/i]!=-1) dp[t+t/i]=min(dp[t+t/i],dp[t]+1);
                if(dp[t+t/i]==-1)
                {
                    dp[t+t/i]=dp[t]+1;
                    xuli.push_back(t+t/i);
                }
            }
        }
        xuli.pop_front();
    }
    cout<<dp[h];
}
