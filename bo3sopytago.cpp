#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dem[2000005];
ll d[1005];
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    ll n,re=0,ma=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i],dem[a[i]*a[i]]++,d[a[i]]++,ma=max(ma,a[i]);
    For(i,1,ma)
    {
        For(j,i,ma)
        {
            re+=(d[i]*d[j]*dem[i*i+j*j]);
        }
    }
    cout<<re;
}
