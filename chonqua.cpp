#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dp[100005][5];
ll a[100005];
//0 thì chọn cách xa
//1 thì chọn kề
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,res=0; cin>>n;
    For(i,1,n) cin>>a[i];
    dp[1][0]=a[1]; dp[1][1]=a[1];
    dp[2][0]=a[2]; dp[2][1]=a[1]+a[2];
    ll ma=a[1];
    res=max(a[1],max(a[2],a[1]+a[2]));
    For(i,3,n)
    {
        dp[i][0]=max(a[i],ma+a[i]);
        dp[i][1]=max(dp[i-1][0]+a[i],a[i]);
        ma=max(ma,max(dp[i-1][0],dp[i-1][1]));
        res=max(res,max(dp[i][0],dp[i][1]));
    }
    cout<<res;
}

