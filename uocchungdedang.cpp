#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,t=0;cin>>n>>k;ll a[n+5];
    for(ll i=1;i<=n;i++){cin>>a[i];t=max(t,a[i]);}
    for(ll i=t;i>=1;i--)
    {
        ll d=0;
        for(ll j=1;j<=n;j++)
        {
            if(a[j]%i==0)d++;
            if(d>=n-k)
            {
                cout<<i;return 0;
            }
        }
    }
    cout<<-1;
}
