#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll f[1000];
void sang()
{
    f[1]=1;
    For(i,2,600)
    {
        if(f[i]==0)
        {
            for(ll j=i*i;j<=600;j=j+i) f[j]=1;
        }
    }
}
bool kt(ll n)
{
    ll t=0,scc;
    while(n>0)
    {
     scc=n%10;
     t=t+scc*scc;
     n=n/10;
    }
    if(f[t]==0)return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    sang();
    ll n,t=2; cin>>n;
    ll d=0;
    while(d<n)
    {
        if(kt(t)==1){d++;}
        t++;
    }
    cout<<t-1;
}
