#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,k;cin>>n>>k; ll a[n+5];
    For(i,1,n) cin>>a[i];
    ll dem=0,ma=-1e18,tam=1;
    For(i,1,n)
    {
        if(a[i]==k)
        {
            dem++;
            if(a[i]==a[i+1])tam++;
            if(a[i]!=a[i+1]||i==n)
            {
                ma=max(ma,tam);
                tam=1;
            }
        }
    }
    cout<<dem<<endl<<ma;
}