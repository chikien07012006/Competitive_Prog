#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll dp[1005],tvet[1005],a[1005];
ll h;
void truyvet(ll i)
{
    if(tvet[i]==0)
    {
        h-=a[i];
        return ;
    }
    h-=a[i];
    truyvet(tvet[i]);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,tong=0,re=0,ketqua=1e18; cin>> n;
    For(i,1,n)cin>>a[i],tong+=a[i];
    For(i,1,n)
    {
        ll tam=0,vitri=0,giatri=0;
        For(j,1,i-1)
        {
            if(a[j]<=a[i])
            {
                if(tam<dp[j])
                {
                    tam=dp[j];
                    vitri=j;
                    giatri=a[j];
                    continue;
                }
                if(tam==dp[j])
                {
                    if(giatri<a[j])
                    {
                        giatri=a[j];
                        vitri=j;
                    }
                }
            }
        }
        dp[i]=tam+1;
        tvet[i]=vitri;
        re=max(re,dp[i]);
    }
    For(i,1,n)
    {
        if(dp[i]==re)
        {
            h=tong;
            truyvet(i);
            ketqua=min(ketqua,h);
        }
    }
    cout<<ketqua;
}
