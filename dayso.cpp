#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
unordered_map<ll,ll> d;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    ll n,m,t=0; cin>>n>>m; ll a[n+5];
    For(i,1,n) cin>>a[i],d[i]=d[i-1]+a[i];
    For(i,m,n)t=max(t,d[i]-d[i-m]);
    For(i,m,n)
    {
        if(d[i]-d[i-m]==t)
        {
            For(j,i-m+1,i) cout<<a[j]<<' ';
            return 0;
        }
    }
}




