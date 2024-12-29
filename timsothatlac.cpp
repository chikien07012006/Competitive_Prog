#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m; cin>>n>>m;ll a[n+5],b[n-m+5];
    For(i,1,n) cin>>a[i];
    For(i,1,n-m) cin>>b[i],d[b[i]]++;
    sort(a+1,a+1+n);
    For(i,1,n)
    {
        if(d[a[i]]==0) cout<<a[i]<<' ';
        if(d[a[i]]>0) d[a[i]]--;
    }
}
