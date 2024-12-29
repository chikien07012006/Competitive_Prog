#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k;cin>>n>>k;ll a[n+5];
    for(ll i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+1+n);ll s=0,d=0;
    for(ll i=n;i>=1;i--)
    {
        s=s+a[i];d++;
        if(s>k){cout<<d;return 0;}
    }
    cout<<-1;
}
