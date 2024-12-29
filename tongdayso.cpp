#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll t;cin>>t;
    for(ll i=1;i<=t;i++)
    {
        ll n,re=0,re1=-100000,fl=0,t=-100000;cin>>n; ll a[n+3],dp[n+5];dp[0]=0;
        for(ll i=1;i<=n;i++){cin>>a[i];t=max(t,a[i]);if(a[i]==0)fl=1;if(a[i]>=0)re=re+a[i];}
        if(fl==0&&re==0)cout<<t<<' '; else cout<<re<<' ';
        for(ll i=1;i<=n;i++){dp[i]=max(dp[i-1]+a[i],a[i]);}
        for(ll i=1;i<=n;i++)re1=max(re1,dp[i]);
        cout<<re1<<endl;
    }
}

