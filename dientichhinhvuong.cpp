#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
signed main()
{
    ios_base::sync_with_stdio(0);
    ll a,b,a1,b1;
    cin>>a>>b>>a1>>b1;
    if(a>b)swap(a,b);
    if(a1>b1)swap(a1,b1);
    ll t=a+a1;
    ll t1=max(b,b1);
    ll t3=max(t1,t);
    cout<<t3*t3;
}


