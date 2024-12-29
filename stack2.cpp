#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
stack<ll>d;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    d.push(0);
    a[0]=0;
    For(i,1,n)
    {
        while(a[i]<a[d.top()])
        {
            d.pop();
        }
        cout<<a[d.top()]<<' ';
        d.push(i);
    }
}
