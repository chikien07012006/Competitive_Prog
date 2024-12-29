#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>b;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=1e18,k; cin>>n>>k; ll a[n+5];
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    For(i,1,n)
    {
        b.push_back(a[i+1]-a[i]);
    }
    sort(b.begin(),b.end());
    cout<<b[k-1];
}
