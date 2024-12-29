#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll a[500005],n;
bool check()
{
    For(i,1,n-1)
    if(a[i]>a[i+1])return 0;
    return 1;
}
bool check1()
{
    For(i,1,n-1)
    if(a[i]<a[i+1])return 0;
    return 1;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll re=0; cin>>n;
    For(i,1,n) cin>>a[i];
    if(check()==1||check1()==1)
    {
        cout<<n*(n-1)/2+n;return 0;
    }
    For(i,1,n)
    {
        ll mi=1e18,ma=0;
        For(j,i,n)
        {
            mi=min(mi,a[j]);
            ma=max(ma,a[j]);
            if((mi==a[i]||mi==a[j])&&(ma==a[i]||ma==a[j]))re++;
        }
    }
    cout<<re;
}







