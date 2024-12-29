#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;
ll dp[500000+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q,k; cin>>n; ll a[n+5];
    for(ll i=1; i<=n; i++) { cin>>a[i]; }
    sort(a+1,a+1+n);
    for(ll i=1;i<=n;i++)dp[i]=dp[i-1]+a[i];
    for(ll i=1;i<=n;i++)dp[i]=dp[i]/i;
    cin>>q;
    for(ll i=1 ;i<=q; i++)
    {
        cin>>k;
        ll l=1,r=n,mid,t=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(dp[mid]>=k)r=mid-1;
            if(dp[mid]<k){t=max(t,mid);l=mid+1;}
        }
        cout<<t<<endl;
    }
}
