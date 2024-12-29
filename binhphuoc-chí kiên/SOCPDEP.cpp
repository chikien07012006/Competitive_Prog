#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll nto[10000005];
void sang(ll n)
{
    nto[1]=1;
    For(i,2,n)
    {
        if(nto[i]==0)
        {
            for(ll j=i*i;j<=n;j+=i)nto[j]=1;
        }
    }
}
bool check(ll n)
{
    vector<ll>ktr;
    while(n>0)
    {
        ktr.push_back(n%10);
        n=n/10;
    }
    //ll flag=0;
    For(i,0,ktr.size()-1)
    {
        if(ktr[i]!=ktr[ktr.size()-i-1])
        {
            return 0;
        }
    }
    return 1;
}
signed main()
{
   // freopen("SOCPDEP.inp","r",stdin);
    //freopen("SOCPDEP.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll a,b,re=0; cin>>a>>b;
    sang(sqrt(b));
    ll l=sqrt(a),r=sqrt(b);
    if(l*l<a)l++;
    For(i,l,r)
    {
        if(nto[i]==0&&check(i)==1)
        {
            re++;
        }
    }
    cout<<re;
}

