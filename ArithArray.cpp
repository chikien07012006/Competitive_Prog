#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll b[100];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,t,d=2;cin>>n;ll a[n];
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n-1;i++)
    {
        if(a[i+1]-a[i]<0);
        else
        {
            t=a[i+1]-a[i];d=2;
            for(ll j=i+1;j<=n;j++)
            {
                if(a[j+1]-a[j]==t)d++;
                else
                {
                    b[t]=max(b[t],d);break;
                }
            }
        }
    }
    for(ll i=0;i<=100;i++)if(b[i]>0)cout<<i<<' '<<b[i]<<endl;
}
