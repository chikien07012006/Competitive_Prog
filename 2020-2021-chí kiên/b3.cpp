#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<ll,ll>dem;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; ll a[n+5];
    For(i,1,n)
    {
        cin>>a[i];
        re+=dem[i-a[i]];
        dem[i+a[i]]++;
    }
    cout<<re;
}
