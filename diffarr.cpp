#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll d[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;ll a[n],res=0;
    for(ll i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+1+n);
    if(a[1]+2<=a[2])a[1]++;
    for(ll i=2;i<=n;i++)
    {
        if(i!=n)
        {if(a[i]-2>=a[i-1]){a[i]--;}
        else
        {
            if(a[i]+2<=a[i+1]){a[i]++;}
            else{;}
        }}
        if(i==n){if(a[n]==a[n-1])a[n]++;}
    }
    for(ll i=1;i<=n;i++){if(d[a[i]]==0){res++;d[a[i]]=1;}}
    cout<<res;
}
