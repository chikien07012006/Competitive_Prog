#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll t;cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll n,k,t=LONG_LONG_MIN;cin>>n>>k;ll a[n+5];
        for(ll i=1;i<=n;i++){cin>>a[i];t=max(t,a[i]);}
        for(ll i=1;i<=n;i++)
        {
            k=k-(t-a[i]);
        }
        if(k==t){cout<<"YES"<<endl;}
        if(k<t){cout<<"NO"<<endl;}
        if(k>t){if((k-t)%(n+1)==0)cout<<"YES"<<endl;else cout<<"NO"<<endl;}
    }
}
