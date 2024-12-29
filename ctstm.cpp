#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; ll a[n+5];
    For(i,1,n)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(ll j=n;j>=2;j--)
    {
        if(a[j]-a[j-1]>=20)
        {
            cout<<n-j+1;return 0;
        }
    }
    cout<<n;
}




