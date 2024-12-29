#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
long long x,n,tich,tong;
int main()
{
    freopen("GIAODIEM.INP","r",stdin);
    freopen("GIAODIEM.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    ll k=24*2014;
    ll s=((n%k)*((n-1)%k)*((n-2)%k)*((n-3)%k))%k;
    s=(s/24)%2014;
    cout<<s;
}



