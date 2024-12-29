#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll tong(ll n)
{
    ll re=0;
    For(i,1,sqrt(n))
    {
        if(n%i==0)
        {
            re+=i;
            re+=(n/i);
        }
        if(i*i==n)re-=i;
    }
    return re;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll a,b; cin>>a>>b;
    ll t=__gcd(tong(a),a);
    ll t1=__gcd(tong(b),b);
    if(a/t==b/t1&&tong(a)/t==tong(b)/t1)
    {
        cout<<tong(a)/t<<endl<<a/t;
        return 0;
    }
    cout<<-1;
}
