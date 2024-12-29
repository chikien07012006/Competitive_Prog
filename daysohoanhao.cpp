#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[10009];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;
    ll a[n+5];for(ll i=1;i<=n;i++){cin>>a[i];f[i]=f[i-1]+a[i];}
    for(ll i=1;i<=n;i++)
}
