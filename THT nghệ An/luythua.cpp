#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll k;
ll lt(ll a,ll n)
{
    if(n==0)return 1;
    if(n==1) return a;
    ll s=lt(a,n/2);
    if(n%2==0)
    {
        return (s%k*s%k)%k;
    }
    if(n%2==1)
    {
        return (s%k*s%k*a%k)%k;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--){
        ll a,m,b,n; cin>>a>>m>>b>>n>>k;
        cout<<lt(lt(a,m),lt(b,n))<<endl;
    }
}