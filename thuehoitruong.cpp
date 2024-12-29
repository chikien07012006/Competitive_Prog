#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp1[100002],dp2[100002];
struct ok{ll x,y;};
bool ss(ok trc,ok sau)
{
    return trc.x<sau.x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,res=0,res1=0;cin>>n;ok a[n+5];
    for(ll i=1;i<=n;i++)cin>>a[i].x>>a[i].y;
    sort(a+1,a+1+n,ss);
    dp1[1]=1;dp2[1]=a[1].y-a[1].x+1;
    for(ll i=2;i<=n;i++)
    {ll t=0,t1=0,fl=0;
        for(ll j=i-1;j>=1;j--)
        {
            if(a[j].y<a[i].x)
            {
                fl=1;
                if(t<=dp1[j])
                {
                    t=dp1[j];
                    t1=max(t1,dp2[j]);
                }
            }
        }
        if(fl==1)
        {
            dp1[i]=t+1;
            dp2[i]=t1+(a[i].y-a[i].x+1);
        }
        else
        {
            dp1[i]=1;
            dp2[i]=a[i].y-a[i].x+1;
        }
        res=max(res,dp1[i]);
    }
    for(ll i=1;i<=n;i++)
    {
        if(dp1[i]==res){res1=max(res1,dp2[i]);}
    }
    cout<<res<<' '<<res1;
}
