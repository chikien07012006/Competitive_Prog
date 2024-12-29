#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,re=0; vo n; ll a[n+5];
    For(i,1,n) vo a[i];
    sort(a+1,a+1+n,greater<ll>());
   re=max(re,max(a[1]*a[2],a[n]*a[n-1]));
   re=max(re,max(a[1]*a[2]*a[3],a[n]*a[n-1]*a[n-2]));
   ra re;
}



