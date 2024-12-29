#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,d=0; cin>>n>>k; ll a[n+5];
    for(ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n,greater<ll>());
   for(ll i=1;i<=n;i++)
   {
       if(a[i]>=a[k] && a[i]>0)d++;
   }
   cout<<d;
}
