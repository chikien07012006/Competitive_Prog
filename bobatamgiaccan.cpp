#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
ll d[10000009];
ll dp[10000009];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;ll a[n+3],res=0;for(ll i=1;i<=n;i++){cin>>a[i];d[a[i]]++;}
    sort(a+1,a+1+n);
    for(ll i=1;i<=n;i++)
    {
        if(a[i]!=a[i-1])dp[a[i]]=i-1;
        else ;
    }
    /*if(n<=1000)
    {
    for(ll i=1;i<=n-2;i++)for(ll j=i+1;j<=n-1;j++)for(ll k=j+1;k<=n;k++)
    if((a[i]+a[j]>a[k])&&((a[i]==a[j])||(a[j]==a[k]))){res++;res=res%1000000007;}
    cout<<res;
    }
    else*/
    {
        for(ll i=1;i<=n;i++)
        {
           if(2*a[i]<=a[n]) res=(res+(d[a[i]]*(d[a[i]]-1)/2)*(dp[2*a[i]]-d[a[i]]))%1000000007;
           if(2*a[i]>a[n])res=(res+(d[a[i]]*(d[a[i]]-1)/2)*(n-d[a[i]]))%1000000007;
            res=(res+(d[a[i]]*(d[a[i]]-1)*(d[a[i]]-2))/6)%1000000007;
            i=i+d[a[i]]-1;
        }
        cout<<res;
    }
}
