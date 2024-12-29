#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,t=0,res=0;cin>>n;ll a[n];for(ll i=1;i<=n;i++){cin>>a[i];t=t+a[i];}
    for(ll i=1;i<=n-2;i++)
    {res=max(res,t-a[i]-a[i+1]-a[i+2]+a[i]*a[i+1]*a[i+2]);
        for(ll j=i+2;j<=n-1;j++)
        {
           res=max(res,t-a[i]-a[i+1]-a[j]-a[j+1]+a[i]*a[i+1]+a[j]*a[j+1]);
        }
    }
    cout<<res;
}
