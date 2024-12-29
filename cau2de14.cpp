#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll f[1005];
void sang(ll n)
{
    For(i,1,n)
    {
        for(ll j=i*2;j<=n;j=j+i)
        {
            f[j]=f[j]+i;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,d=0,t=0; cin>>n;
    sang(n);
    For(i,1,n)
    {
        if(f[i]==1) d++;
        if(f[i]==i)t=t+i;
    }
    cout<<d<<' '<<t;
}
