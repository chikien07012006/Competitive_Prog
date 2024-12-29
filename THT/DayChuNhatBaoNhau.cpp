#include<bits/stdc++.h>
using namespace std; 
#define ll long long 
#define For(i,a,b) for(ll i=a;i<=b;i++) 
ll dp[200],dp1[200];
ll res=0;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; ll x1[n+5],x2[n+5],y1[n+5],y2[n+5];
    For(i,1,n)
    {
        cin>>x1[i]>>y1[i]>>x2[i]>>y2[i];
    }
    For(i,1,n)
    {
        
        ll ma=0,ma1=0;
        For(j,1,i-1)
        {
            if(x1[j]>=x1[i]&&y1[j]>=y1[i]&&x2[j]<=x2[i]&&y2[j]<=y2[i])
            {
                ma=max(ma,dp[j]);
            }
            if(x1[j]<=x1[i]&&y1[j]<=y1[i]&&x2[j]>=x2[i]&&y2[j]>=y2[i])
            {
                ma1=max(ma1,dp1[j]);
            }
        }
        
            dp[i]=ma+1;
            dp1[i]=ma1+1;
            res=max(res,max(dp[i],dp1[i]));
    }
    cout<<res;
}