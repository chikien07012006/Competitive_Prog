#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<ll,ll>check;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,x,d=0; cin>>n>>x;
    For(i,1,n) 
    {
        ll j; cin>>j; 
        if(check[x-j]!=0)
        {
            d+=check[x-j];
        }
        check[j]++;
    }
    cout<<d;
}