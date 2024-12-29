#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<ll,ll>check;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,k,re=0; cin>>n>>m>>k; ll a[n+5],b[m+5];
    For(i,1,n) cin>>a[i];
    For(i,1,m) cin>>b[i];
    sort(a+1,a+1+n); sort(b+1,b+1+m);
    For(i,1,n)
    {
        ll l=1,fl=0,r=m,moc=0,mi=a[i]-k,mid,ma=a[i]+k;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(b[mid]>ma)
            {
                r=mid-1; continue;
            }
            if(b[mid]<mi)
            {
                l=mid+1; continue;
            }
            if(b[mid]<=ma&&b[mid]>=mi)
            {
                if(fl==0&&check[b[mid]]==0)
                {
                    re++;
                    fl=1;
                }
                if(b[mid]<a[i]) l=mid+1;
                if(b[mid]>=a[i]) r=mid-1;
                if(check[b[mid]]==0)moc=mid;
            }
        }
        check[b[moc]]=1;
    }
    cout<<re;
}
