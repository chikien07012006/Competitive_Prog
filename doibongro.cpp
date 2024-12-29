#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll d1[100005],d2[100005],d3[100005],d4[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0;cin>>n; ll a[n+5],b[n+5];
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n;i++)cin>>b[i];
    d1[1]=a[1];d2[1]=b[1];
    d3[1]=a[1];d4[1]=b[1];
    for(ll i=2;i<=n;i++)
    {
        d1[i]=max(d3[i-2],d4[i-1])+a[i];
        d2[i]=max(d3[i-1],d4[i-2])+b[i];
        d3[i]=max(d3[i-1],d1[i]);
        d4[i]=max(d4[i-1],d2[i]);
        re=max(re,max(d1[i],d2[i]));
    }
    cout<<re;
}

