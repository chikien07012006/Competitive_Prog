#include<iostream>
using namespace std;
typedef long long ll;
const long long x=1e9+7;
ll dp[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k;cin>>n>>k;ll a[1000000];
    for(ll i=1;i<=k;i++)cin>>a[i];dp[0]=1;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=k;j++)
        {
            if(0<=i-a[j])
            {
                dp[i]=(dp[i]+dp[i-a[j]])%x;
            }
        }
    }
    cout<<dp[n];
}
