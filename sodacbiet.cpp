#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll quaban(ll n)
{
    ll tong=0;
    if((n-1)%2==1)
    {
        tong=tong+(n-2)/2+1;
    }
    if((n-2)%2==1)
    {
        tong=tong+(n-3)/2+1;
    }
    ll t=(n-1)/2;
    if(n%2==1)
    {
        tong=tong + (t-1)*t+t;
    }
    if(n%2==0)
    {
        tong=tong + t*(t+1);
    }
    return tong;
}
ll capduoi(ll n)
{
    ll dem=1;
    ll i=1,tong=0;
    while(dem+(i+1)*(i+1)-i*i<n-1)
    {
        dem=dem+(i+1)*(i+1)-i*i;
        tong=tong+i*((i+1)*(i+1)-i*i);
        i++;
    }
    if(n-1>dem)
    {
        ll tam=n-1-dem;
        tong=tong+i*tam;
    }
    return tong;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m; cin>>n>>m;
    cout<<quaban(n)+capduoi(m);
}
