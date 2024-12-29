#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
multiset<ll>d;
int main()
{
    ios_base::sync_with_stdio(0);
    ll k,m,n,re=0,re1=0; cin>>k>>m>>n; ll a[n+5];
    For(i,1,n) cin>>a[i],d.insert(a[i]);
    while(m>0)
    {
        re=*d.end()-*d.begin();
        ll u=*d.begin(); ll v=*d.end();
        ll t=*d.lower_bound(u); d.erase(t);
         t=*d.lower_bound(v); d.erase(t);
        if(v<k)
        {
            cout<<re; return 0;
        }
        u=u-k;v=v+k;
        d.insert(u); d.insert(v);
        re1=*d.end()-*d.begin();
        if(re1>re)
        {
            cout<<re;return 0;
        }
        m--;
    }
    cout<<min(re,re1);
}










