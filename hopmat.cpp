#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
struct hoho{ll x,y;};
bool ss(hoho truoc, hoho sau)
{
    return truoc.x<sau.x;
}
hoho a[5002];ll dp[5002];
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,res=0;cin>>n;for(ll i=1;i<=n;i++){cin>>a[i].x>>a[i].y;}
    sort(a+1,a+1+n,ss);dp[1]=1;
    for(ll i=2;i<=n;i++)
    {ll fl=0,t=0;
        for(ll j=i;j>=1;j--)
        {
            if(a[j].y<=a[i].x){t=max(t,dp[j]);fl=1;break;}
        }
        if(fl==1)dp[i]=t+1;else dp[i]=1;
    }
    for(ll i=1;i<=n;i++)
    {
        res=max(res,dp[i]);
    }
    cout<<res;
}
