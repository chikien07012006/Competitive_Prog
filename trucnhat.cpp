#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f[10000000];
void sang()
{
    for(ll i=1;i<=5*1000000;i++)
    {
        for(ll j=i;j<=5*1000000;j=j+i)f[j]=f[j]+i;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;ll a[n+5],d=0;sang();
    for(ll i=1;i<=n;i++){cin>>a[i];if(a[i]*2>f[a[i]])d++;}
    cout<<d;
}
