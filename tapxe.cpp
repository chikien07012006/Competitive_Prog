#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,res=0; cin>>n>>k; ll a[n+5];
    for(ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    for(ll i=1;i<=n;i++)
    {
        ll t=k-a[i],re=0;
        if(t<a[i+1])break;
        ll l=i+1,r=n,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a[mid]<=t){re=max(re,mid);l=mid+1;}
            else r=mid-1;
        }

        res=res+(re-i);
    }
    cout<<res;
}
