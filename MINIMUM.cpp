#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define for(i,a,b) for(ll i=a;i<=b;i++)
deque<ll>d;
signed main()
{
    freopen("MINIMUM.inp","r",stdin);
    freopen("MINIMUM.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,k; cin>>n>>k; ll a[n+5];
    for(i,1,n) cin>>a[i];
    for(i,1,k)
    {
        while(!d.empty() && a[d.back()] >= a[i]) d.pop_back();
        d.push_back(i);
    }
    for(i,k,n)
    {
        while(!d.empty() && a[d.back()] >= a[i]) d.pop_back();
        if(d.front()+k-1<i)d.pop_front();
        d.push_back(i);
        cout<<a[d.front()]<<"\n";
    }
}
