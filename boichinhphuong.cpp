#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll thuaso[10000005];
ll nto[10000005];
ll check[10000005];
vector<ll>u;
const ll mod=1000000007;
void sang()
{
    For(i,2,10000000)
    {
        if(nto[i]==0)
        {
            nto[i]=i;
            for(ll j=i*i;j<=10000000;j+=i)
            {
                if(nto[j]==0) nto[j]=i;
            }
        }
    }
}
void phantich(ll n)
{
    thuaso[1]=1;
    while(n>1)
    {
        ll t=nto[n];
        if(check[t]==0)
        {
            check[t]=1;
            u.push_back(t);
        }
        ll tam=0;
        while(n%t==0)
        {
            tam++;
            n=n/t;
        }
        thuaso[t]=max(thuaso[t],tam);
    }
}
signed main()
{
    ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);
    sang();
    ll n,re=1; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i],phantich(a[i]);
    For(i,0,u.size()-1)
    {
        if(thuaso[u[i]]%2==1)
        {
            For(j,1,thuaso[u[i]]/2+1)re=(re*u[i]%mod)%mod;
        }
        if(thuaso[u[i]]%2==0)
        {
            For(j,1,thuaso[u[i]]/2)re=(re*u[i]%mod)%mod;
        }
    }
    cout<<(re%mod*re%mod)%mod;
}
