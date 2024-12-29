#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dem[1000005];
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,re=0;cin>>n; ll a[n+5];
    For(i,1,n) 
    {
        cin>>a[i];
        dem[a[i]]++;
        if(dem[a[i]]>=2)
        {
            dem[a[i]]-=2;
            re++;
        }
    }
    cout<<re;
    return 
}