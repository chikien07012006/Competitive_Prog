#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k;cin>>n;ll  a[n+5];
    for(ll i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+1+n);
    for(ll i=1;i<=n;i++)cout<<a[i]<<' ';
}
