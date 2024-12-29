#include<iostream>
using namespace std;
typedef long long ll;
ll s[1000000];
void sangngt()
{
    for(long long i=2;i<=1000000;i++)if(s[i]==0)for(long long j=i*i;j<=1000000;j=j+i)if(s[j]==0)s[j]=i;
    for(long long i=2;i<=1000000;i++) if(s[i]==0) s[i]=i;
}
int main()
{
    ios_base::sync_with_stdio(0);
    sangngt();
    ll n;cin>>n;ll a[n+2],d=0,res=0;
    for(ll i=1;i<=n;i++) {cin>>a[i];ll t=a[i];while(t>1){t=t/s[t];d++;}}
    ll d1=0;while(a[1]>1){a[1]=a[1]/s[a[1]];d1++;}
    res=d-d1;
    for(ll i=2;i<=n;i++)
    {
        d1=0;while(a[i]>1){a[i]=a[i]/s[a[i]];d1++;}
        res=min(res,d-d1);
    }
    cout<<res;
}
