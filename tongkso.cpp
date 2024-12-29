#include<iostream>
using namespace std;
typedef long long ll;
ll dp[1000000];
int main()
{
    ios_base::sync_with_stdio(0);
    dp[0]=0;
    ll n,k,res=0;cin>>n>>k;ll a[n+5];for(ll i=1;i<=n;i++){cin>>a[i];dp[i]=dp[i-1]+a[i];}
    for(ll i=1;i<=n;i++)
    {
        res=max(res,dp[i+k-1]-dp[i-1]);
    }
    cout<<res;
}
