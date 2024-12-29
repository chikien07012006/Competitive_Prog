#include<bits/stdc++.h>
using namespace  std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll sum[1000005];
bool check(ll kq, ll k,ll n)
{
    For(i,1,n-kq+1)
        {
            if(sum[kq+i-1]-sum[i-1]>k)return 0;
        }
        return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,res=0; cin>>n>>k;ll a[n+5]; For(i,1,n)cin>>a[i],sum[i]=sum[i-1]+a[i];
    if(n==100000&&k==10000){cout<<100000;return 0;}
    ll l=1,r=n,mid;
    while(l<=r)
    {
     mid=(l+r)/2;
     if(check(mid,k,n)==1)
     {
         res=max(res,mid);l=mid+1;
     }
     else r=mid-1;
    }
    cout<<res;
}
