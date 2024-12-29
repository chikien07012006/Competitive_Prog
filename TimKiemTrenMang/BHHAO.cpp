#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
bool check(ll n)
{
    ll t=1;
    For(i,2,sqrt(n))
    {
        if(n%i==0)
        {
            t=t+i;t=t+n/i;
            if(n/i==i)t=t-i;
        }
    }
    if(t==n)return 1;
    return 0;
}
signed main()
{
    //freopen("BHHAO.INP","r",stdin);
    //freopen("BHHAO.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n; cin>>n; ll re=0;
    ll t;
    while(n--)
    {
        cin>>t;ll t1=0;
        while(t>0){
            t1=t1+t%10;
            t=t/10;
        }
        if(check(t1)==1)re++;
    }
    cout<<re;
}



