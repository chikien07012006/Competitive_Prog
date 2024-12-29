#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
const ll mod=1e9+7;
ll a[5][5];
void nhan()
{
    ll x=a[0][0]*a[0][0]+a[1][0]*a[0][1];
    ll y=a[0][0]*a[0][1]+a[0][1]*a[1][1];
    ll k=a[1][0]*a[0][0]+a[1][1]*a[1][0];
    ll z=a[1][0]*a[0][1]+a[1][1]*a[1][1];
    a[0][0]=x;
    a[0][1]=y;
    a[1][0]=k;
    a[1][1]=z;
}
void nhan1()
{
    ll x=a[0][0]+a[1][0];
    ll y=a[0][1]+a[1][1];
    ll k=a[0][0];
    ll z=a[0][1];
    a[0][0]=x;
    a[0][1]=y;
    a[1][0]=k;
    a[1][1]=z;
}
void luythua(ll n)
{
    if(n==1) return;
    luythua(n/2);
    nhan();
    if(n%2==1)
    {
        nhan1();
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    a[0][0]=1; a[0][1]; a[1][0]=1; a[1][1]=0;
    luythua(n-1);
    cout<<a[0][0];
}
