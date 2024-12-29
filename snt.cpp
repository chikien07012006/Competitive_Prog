#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
bool pr(ll n)
{
    if(n<2)return 0;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
bool check(ll t)
{
    ll h=sqrt(t);
    if(h*h==t&&pr(h)==1)return 1;
    return 0;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; ll a[n+5];
    For(i,1,n)
    {
        cin>>a[i];
        if(check(a[i])==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}





