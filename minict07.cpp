#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,t,res=0; cin>>n; ll a[n+5],b[n+5];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    t=b[1];res=max(res,t);
    for(ll i=2;i<=n;i++)
    {
        t=t-a[i]+b[i];
        res=max(res,t);
    }
    cout<<res;
}
