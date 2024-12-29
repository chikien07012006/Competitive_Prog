#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,res=0;cin>>n;ll a[n];for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n;i++)
    { ll t=0;
        if(a[i]!=0)for(ll j=i;j<=n;j++)
        {
            t=t+a[j]; if(t%9==0){res=max(res,j-i+1);if(j==n){cout<<res;return 0;}}
        }
    }
    cout<<res;
}
