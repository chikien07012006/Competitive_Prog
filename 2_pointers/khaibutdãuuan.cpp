#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define For(i,a,b) for(ll i=a;i<=b;i++)
map<ll,ll>check;
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,l,u,sl=0,re=0; cin>>n>>l>>u; ll a[n+5];
    For(i,1,n)
    {
        cin>>a[i];
    }
    ll x=0,y=0;
    while(x<=y&&y<=n)
    {
        if(sl>=l&&sl<u)
        {
            re++;
            y++;
            check[a[y]]++;
            if(check[a[y]]==1) sl++;
        }
        if(sl<l){y++;check[a[y]]++; if(check[a[y]]==1) sl++;}
        if(sl>=u)
        {
            if(sl==u) re++;
            check[a[u]]--;
            if(check[a[u]]==0)sl--;
            u++;
        }
    }
    cout<<re;
}