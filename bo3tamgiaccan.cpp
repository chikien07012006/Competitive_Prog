#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll d[20000005],f[20000005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,res=0,k=1000000007; cin>>n; ll a[n+5];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];d[a[i]]++;
    }
    sort(a+1,a+1+n);ll t=0;
    for(ll i=1;i<=a[n]*2;i++)
    {
        if(d[i]>=1){f[i]=t;t=t+d[i];}
        else
        f[i]=t;
    }
  //  cout<<f[18]<<endl;
    for(ll i=1;i<=n;i++)
    {
        if(d[a[i]]>=2)cout<<f[a[i]*2]<<endl;//res=res+((d[a[i]]*(d[a[i]]-1)/2)%k*f[a[i]*2]%k)%k;//+(d[a[i]]*d[a[i]-1]*d[a[i]-2]/6)%k)%k;
    }
    cout<<res;
}
