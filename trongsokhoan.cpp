#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; ll a[n+5],re=0;
    For(i,1,n) cin>>a[i];
    For(i,1,n)
    {
        ll mi=1e18,ma=0;
        For(j,i,n)
        {
            mi=min(mi,a[j]); ma=max(ma,a[j]);
            re=re+(ma-mi);
        }
    }
    cout<<re;
}
