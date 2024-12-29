#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll seg[8*100005];
ll a[2*100005];
void build(ll id,ll l,ll r)
{
    if(l==r)
    {
        seg[id]=a[l];
        return ;
    }
    ll m=(l+r)/2;
    build(id*2,l,m);
    build(id*2+1,m+1,r);
}
void update(ll id,ll l,ll r,ll u,ll v,ll val)
{
    if(r<u||l>v) return ;
    if(l>=u&&r<=v)
    {
        seg[id]+=val;
        return ;
    }
    ll m=(l+r)/2;
    update(id*2,l,m,u,v,val);
    update(id*2+1,m+1,r,u,v,val);
}
void get(ll id,ll l,ll r,ll ct)
{
    if(r<ct||l>ct) return ;
    if(l==r&&l==ct)
    {
        cout<<seg[id]<<endl;
        return ;
    }
    seg[id*2]+=seg[id];
    seg[id*2+1]+=seg[id];
    seg[id]=0;
    ll m=(l+r)/2;
    get(id*2,l,m,ct);
    get(id*2+1,m+1,r,ct);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,q; cin>>n>>q;
    For(i,1,n) cin>>a[i];
    build(1,1,n);
    while(q--)
    {
        ll x; cin>>x;
        if(x==1)
        {
            ll a,b,u; cin>>a>>b>>u;
            update(1,1,n,a,b,u);
        }
        if(x==2)
        {
            ll k; cin>>k;
            get(1,1,n,k);
        }
    }
}
