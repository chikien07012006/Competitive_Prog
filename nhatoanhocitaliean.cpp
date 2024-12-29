#include<iostream>
#include<iomanip>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;ll a[n+5],b[n+5];double res=0;for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=2;i<=n-1;i++)
    {ll t=0;
        for(ll j=i+1;j<=n;j++)
        {
            if(a[j]>a[i])t++;
        }
        b[i]=t;
    }
    for(ll i=1;i<=n-2;i++)
    {
        for(ll j=i+1;j<=n-1;j++)
        {
            if(a[j]<a[i])res=res+b[j];
        }
    }
   cout<<fixed<<setprecision(6);
    cout<<res/(double)(n*(n-1)*(n-2)/6);
}
