#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dp[5005];
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    For(i,1,n)
    {
        For(j,1,i-1)
        {
            if(a[i]>a[j]) dp[i]=max(dp[i],dp[j]);
        }
        dp[i]+=1;
        re=max(re,dp[i]);
    }
    cout<<re;
}
