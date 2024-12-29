#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    For(i,1,n-2)
    {
        For(j,i+1,n-1)
        {
            ll l=j+1,r=n,ct=-1e18;
            while(l<=r)
            {
                ll mid=(l+r)/2;
                if(a[mid]<a[i]+a[j])
                {
                    ct=mid;
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
            if(ct!=-1e18)re+=(ct-j);
        }
    }
    cout<<re;
}
