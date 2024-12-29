#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll KCM[100005];
signed main()
{
    freopen("THREENUM.INP","r",stdin);
    freopen("THREENUM.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    ll t=a[n];
    for(ll i=n-1;i>=2;i--)
    {
        KCM[i]=-3*a[i]+5*t;
        if(a[i]>t)
        {
            t=a[i];
        }
    }
    For(i,1,n)
    {
        re=max(re,2*a[i]+KCM[i+1]);
    }
    cout<<re;
}



