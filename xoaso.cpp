#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dp[1000005];
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
    ll n,re=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    For(i,1,n)
    {
        ll fl=0;
        for(ll j=i-1;j>=1;j--)
        {
            if(a[j]==0) continue;
            if(a[i]%a[j]==0)
            {
                fl=1;
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        if(fl==0)dp[i]=1;

                re=max(re,dp[i]);
    }
    cout<<n-re;
}
