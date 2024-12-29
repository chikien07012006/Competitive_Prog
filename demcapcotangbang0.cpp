#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
unordered_map<ll,ll> d;
ll t=1e9;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,x,re=0; cin>>n;
    For(i,1,n)
    {
        cin>>x;
        if(x>=0)
        {
            ll h=x-2*x;
            re+=d[h+t];
        }
        else
        {
            ll h=x+x*-2;
            re=re+d[h+t];
        }
        d[x+t]++;
    }
    cout<<re;
}
