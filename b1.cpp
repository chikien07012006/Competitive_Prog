#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<ll,ll>d;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0,t=1; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    For(i,1,n)
    {
        For(j,i,n)
        {
            t=t*a[j];
            ll h=sqrt(t);
            if(h*h==t) re++;
        }
        t=1;
    }
    cout<<re;
}
