#include<bits/stdc++.h>
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,res=0; cin>>n;
    ll a[n+5]; For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    For(i,1,n-2)
    {
        For(j,i+1,n-1)
        {
            ll re=0;
            ll l=j+1,r=n;
            while(l<=r)
            {
                 ll mid=(l+r)/2;
                 if(a[mid]<a[i]+a[j])
                 {
                     l=mid+1;
                     re=max(re,mid);
                 }
                 if(a[mid]>=a[i]+a[j])
                 {
                     r=mid-1;
                 }
            }
            if(re!=0)
            {
                res=res+(re-j);
            }
        }
    }
    cout<<res;
}
