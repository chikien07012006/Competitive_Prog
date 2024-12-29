#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,x,q,re=0; cin>>n>>x>>q; ll a[n+5];
    For(i,1,n) {cin>>a[i];d[i]=d[i-1]+a[i];}
    ll u,v;
    For(i,1,q)
    {
        cin>>u>>v;
        if(d[v]-d[u-1]<x) re++;
    }
    cout<<re;
}
