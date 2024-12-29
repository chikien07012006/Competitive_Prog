#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll mo=1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re; cin>>n;
    ll l=1,r=n;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(mid*(mid+1)/2>=n)
        {
            re=mid;
            r=mid-1;
        }
        if(mid*(mid+1)/2<n)
        {
            l=mid+1;
        }
    }
    ll res=(re*(re+1)*(2*re+1))/6;
    ll de=(re*(re+1)/2)-n;
    res=res-de*re;
    cout<<res;
}
