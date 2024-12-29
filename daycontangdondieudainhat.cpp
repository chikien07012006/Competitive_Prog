#include<iostream>
using namespace std;
typedef long long ll;
ll f[10000];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,re=1;cin>>n;ll a[n+5];
    for(ll i=1;i<=n;i++){cin>>a[i];}
    f[1]=1;
    for(ll i=2;i<=n;i++)
    {ll t=0;
        for(ll j=i-1;j>=1;j--)
        {
            if(a[i]>a[j])
            {
               // cout<<a[j]<<' '<<a[i];return 0;
                t=max(t,f[j]);
            }
        }
        if(t==0)f[i]=1;
        else f[i]=t+1;
        re=max(re,f[i]);
    }
    cout<<re;
}
