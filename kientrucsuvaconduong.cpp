#include<iomanip>
#include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,q,l,r;cin>>n;ll a[n+2],dp[n+2];dp[0]=0;for(ll i=1;i<=n;i++){cin>>a[i];dp[i]=dp[i-1]+a[i];}cin>>q;
    for(ll i=1;i<=q;i++)
    {
        //cout<<(dp[5]-dp[3])/(6-4);return 0;
        cin>>l>>r;float t;
         t=((double)dp[r-1]-(double)dp[l-1])/(double)(r-l);
        cout<<fixed<<setprecision(6);
        cout<<t<<endl;
    }
}
