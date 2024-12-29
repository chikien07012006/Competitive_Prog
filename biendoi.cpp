#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,t=0; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i],t=t+a[i];
    ll t1=t;
    t=t/n+1;
    t1=t1/n;
    ll re=0,re1=0;
    For(i,1,n)
    {
        re=re+(a[i]-t)*(a[i]-t);
        re1=re1+(a[i]-t1)*(a[i]-t1);
    }
    cout<<min(re,re1);
}


