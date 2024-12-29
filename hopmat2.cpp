#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
struct hoho{ll x,y,z;};
bool ss(hoho truoc, hoho sau)
{
    return truoc.x<sau.x;
}
hoho a[30009];ll dp[30009];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,res=0;cin>>n;for(ll i=1;i<=n;i++){cin>>a[i].x>>a[i].y;a[i].z=a[i].y-a[i].x;}
    sort(a+1,a+1+n,ss);dp[1]=a[1].z;res=dp[1];
    //for(ll i=2;i<=n;i++)cout<<a[i].x<<' '<<a[i].y<<' '<<a[i].z<<endl;
    for(ll i=2;i<=n;i++)
    {ll fl=0,t=0;
        for(ll j=i;j>=1;j--)
            {
                if(a[j].y<=a[i].x)
                {
                 t=max(t,dp[j]);fl=1;
                }
            }
            if(fl==1)dp[i]=t+a[i].z;else dp[i]=a[i].z;
            res=max(res,dp[i]);
           // cout<<dp[i]<<endl;
    }cout<<res;
}

