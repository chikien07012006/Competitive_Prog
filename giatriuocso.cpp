#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll abc(ll n)
{
    ll s=0;
    while(n>0)
    {
        s=s+(n%10);
        n=n/10;
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,t=0,re=1e18;
    cin>>n;
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            t=max(t,abc(i));
            t=max(t,abc(n/i));
        }
    }
    for(ll i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(t==abc(i))
            {
                re=min(re,i);
            }
            if(t==abc(n/i))
            {
                re=min(re,n/i);
            }
        }
    }
    cout<<re;
}
