#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    freopen("BKID.INP","r",stdin);
    freopen("BKID.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    ll dx=1;
    For(i,2,n)
    {
        if(a[i]<a[dx])
        {
            cout<<dx<<endl;
            dx=i;
        }
        else
        {
            cout<<i<<endl;
        }
    }
}



