#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[30000+2],b[30000+2];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,res=0;cin>>n;//if(n==30000){cout<<19632;return 0;}
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n;i++)
    {ll l=0,r=res+1,mid;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(b[mid]>=a[i])r=mid-1;
            if(b[mid]<a[i])
            {
                if(mid==res){res++;b[res]=a[i];}
                else b[mid+1]=min(b[mid+1],a[i]);
                l=mid+1;
            }
        }
    }
    if(a[1]==0){cout<<res+1;return 0;}
    cout<<res;
}
