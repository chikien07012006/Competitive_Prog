#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,k,fl=0,res=0;
    cin>>n>>k; ll a[n + 5];
    for(ll i=1;i<=n;i++)cin>>a[i];
    sort(a+2,a+1+n);
    ll d=0,t=n-k-1;
    for(ll i=2;i<=n;i++)
    {
        if(d<t)
        {
            a[i]=0-a[i];
            d++;
        }
        else break;
    }
    for(ll i=1;i<=n;i++)res=res+a[i];
    cout<<res;
}
