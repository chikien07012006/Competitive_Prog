#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll m=20240131;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; if(n>=m) n=m-1;
    ll t=1,res=0;
    For(i,1,n)
    {
        res=(res+t%m)%m;
        t=(t%m*(i+1)%m)%m;
    }
    cout<<res;
}
