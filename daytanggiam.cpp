#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll b[10000009],c[10000009];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,res=0;cin>>n;ll a[n+5];if(n==1){cout<<0;return 0;}
    for(ll i=1;i<=n;i++){cin>>a[i];b[i]=1;c[i]=1;}
    for(ll i=2;i<=n;i++)
    {
        if(a[i-1]<a[i])b[i]=b[i-1]+1;
    }
    for(ll i=n-1;i>=1;i--)
    {
        if(a[i]>a[i+1])c[i]=c[i+1]+1;

    }
    for(ll i=1;i<=n;i++)
    {
        res=max(res,b[i]+c[i]);
    }
    if(res!=2)cout<<res-1;
    else cout<<0;
}
