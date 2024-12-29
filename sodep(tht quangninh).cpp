#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
unordered_map<ll,ll>d;
void ok(ll n,ll k)
{
    For(i,2,n)
    {
        ll t=i*i;ll t1=1;
        while(t*t1<=k)
        {
            d[t*t1]=1;
            t1++;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=0; cin>>n;
    ll t=sqrt(n);
    ok(t,n);
    For(i,1,sqrt(n))
    {
        if(n%i==0)
        {
            ll h=n/i;
            if(d[i]==0)re=max(re,i);
            if(d[h]==0)re=max(re,h);
        }
    }
    cout<<re;
}






