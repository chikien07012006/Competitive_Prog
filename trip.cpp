#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[25][25],kq[25],t[25],f[25],n,res=1e18;
void ketqua()
{
    ll tong=0;
    for(int i=1;i<=n-1;i++)
    {
        tong=tong+a[t[i]][t[i+1]];
    }
    if(res<tong){
        for(int i=1;i<=n;i++)kq[i]=t[i];
    }
    res=min(res,tong);
}
void sinhv(ll i,ll n)
{
    for(ll j=1;j<=n;j++)
    {
        if(f[j]==0)
       {
           t[i]=j;f[j]=1;
        if(i==n)
        {
            ketqua();
        }
        else {sinhv(i+1,n);}
        f[j]=0;
       }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++)for(ll j=1;j<=n;j++)cin>>a[i][j];
    sinhv(1,n);
}
