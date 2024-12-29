#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define For(i,a,b) for(ll i=a;i<=b;i++)
long long x,n,tich,tong;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=1; cin>>n;
    ll t=1000000007;
    For(i,1,n)
    {
        ll h=t*__gcd(re,i);
        re=((re%h)*(i%h))%h;
        re=(re/__gcd(re,i))%t;
    }
cout<<re;
}



