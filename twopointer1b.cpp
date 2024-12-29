#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m; cin>>n>>m; ll a[n+5],b[m+5];
    For(i,1,n) cin>>a[i];
    For(i,1,m) cin>>b[i];
    For(i,1,m)
    {
        ll l=1,r=n,mid,t=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]<b[i])l=mid+1,t=max(t,mid);
            if(a[mid]>=b[i])r=mid-1;
        }
        cout<<t<<' ';
    }
}
