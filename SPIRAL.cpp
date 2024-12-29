#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
#define vo cin>>
#define ra cout<<
int main()
{
    freopen("SPIRAL.inp","r",stdin);
    freopen("SPIRAL.out","w",stdout);
    ios_base::sync_with_stdio(0);cin.tie(NULL); cout.tie(NULL);
    ll n,re=0; vo n; ll m=n;
    ll t=(n-1)*2;
    while(t>=0)
    {
        re=re+n;
        n=n+t;
        t=t-2;
    }
    cout<<re;
}


