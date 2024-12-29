#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[20005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; ll a[n+5];
    for(ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    for(ll i=1;i<=n;i++)
    {
        dp[i]=a[i];
        if(a[i]==a[i-1])
        {
            dp[i]=dp[i-1]+dp[i];
        }
        else
        {
            ll t=0;
                for(ll j=i;j>=1;j--)
                {
                    if(a[j]+2<=a[i])
                    {
                        t=max(t,dp[j]);
                    }
                }
                dp[i]=t+dp[i];
        }
        re=max(re,dp[i]);
    }
    cout<<re;
}
