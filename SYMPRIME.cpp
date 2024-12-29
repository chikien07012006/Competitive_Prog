#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll f[3*10000000],d[3*10000000];
void sang()
{
    ll k=0;
    For(i,2,3*10000000)
    {
        if(f[i]==0)
        for(ll j=i*i;j<=3*10000000;j=j+i)
        {
            f[j]=-1;
        }
    }
    d[1]=2;
    f[2]=1;
    k=1;
    for(ll i=3;i<=3*10000000;i=i+2)
    {
        if(f[i]==0)
        {
            k++;
            d[k]=i;
            f[i]=k;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    sang();
    ll n; cin>>n;
    while(n--)
    {
        ll x; cin>>x;
        if(f[x]!=-1)
        {
         if((d[f[x]-1]+d[f[x]+1])==x*2)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        }
    }
    return 0;
}


