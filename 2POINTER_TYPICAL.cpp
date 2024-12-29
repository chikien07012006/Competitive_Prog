#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<ll,ll>dem;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    ll n,k,res=0,khacnhau=0; cin>>n>>k; ll a[n+5];
    For(i,1,n) cin>>a[i];
    ll l=1,r=1;
    dem[a[1]]++;khacnhau++;
    if(khacnhau<=k)res++;
    while(l<=r&&r<=n)
    {
        if(khacnhau<=k)
        {
            r++; if(r>n)break;
            dem[a[r]]++;
            if(dem[a[r]]==1)khacnhau++;
            if(khacnhau<=k)res=res+(r-l+1);
        }
        else
        {
            dem[a[l]]--;
            if(dem[a[l]]==0) khacnhau--;
            l++;
            if(khacnhau<=k)res=res+(r-l+1);
        }
    }
    cout<<res<<endl;
}

