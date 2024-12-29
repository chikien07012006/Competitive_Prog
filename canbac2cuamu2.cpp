#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,res=1e18;cin>>n;
    ll a[n+5];
    for(ll i=1;i<=n;i++)cin>> a[i];
    sort(a+1,a+1+n);
    for(ll i=1;i<n;i++)
    {
        res=min(res,abs(a[i]-a[i+1]));
    }
    cout<<res;
}
