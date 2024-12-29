#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[10000005],f[10000005];
void sang()
{
    For(i,2,sqrt(10000000))
    {
        if(d[i]==0)
        for(ll j=i;j<=10000000;j=j+i)
            d[j]=i;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    sang();
    For(i,1,10000000)
    {
        if(d[i]<=5)
        {
            f[i]=f[i-1]+1;
        }
        else f[i]=f[i-1];
    }
    ll k; cin>>k;
    while(k--)
    {
        ll t; cin>>t;
        if(d[t]<=5)
        {
            cout<<"YES"<<' '<<f[t]<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
