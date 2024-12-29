#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,t=0;cin>>n>>k; ll a[n+5];
    for(ll i=1;i<=n;i++)cin>>a[i],t=t+a[i];
    if(t%k==0)cout<<t/k;
    else cout<<t/k+1;
}
