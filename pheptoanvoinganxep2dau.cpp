#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a[3005],dp[3005][3005][2];
ll get(int l,int r,bool id)
{
    if(l>r)return 0;
    if(dp[l][r][id]!=1e18)return dp[l][r][id];
     bool nid=!id;
 ll th1=get(l+1,r,nid);
 ll th2=get(l,r-1,nid);
 if(id==0)
 {
     th1=th1+a[l];
     th2=th2+a[r];
     dp[l][r][id]=max(th1,th2);
 }
 else
 {
     th1=th1-a[l];
     th2=th2-a[r];
     dp[l][r][id]=min(th1,th2);
 }
 return dp[l][r][id];
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n;cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n;i++)
        for(ll j=1;j<=n;j++)dp[i][j][0]=dp[i][j][1]=1e18;
    cout<<get(1,n,0);
}
