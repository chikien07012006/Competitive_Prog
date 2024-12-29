#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,f;cin>>n>>k;f=n;ll a[k+6],t=0,mi=1e18;
    for(ll i=1;i<=k;i++)cin>>a[i];
    sort(a+1,a+1+k);
    for(ll i=k;i>=1;i--){if(a[i]==f)f--;t=t+a[i];}
    cout<<t-a[1]+f;
}
