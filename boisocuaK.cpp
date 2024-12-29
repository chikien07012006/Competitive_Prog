#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll n,k;
struct oke
{
    ll giatri;
    char dau;
};
bool dp[10005][105];
oke trace[10005][105];
ll a[10005];
void tvet(ll val,ll mod)
{
    if(val==1)
    {
        return ;
    }
    if(trace[val][mod].dau=='-')
    {
        tvet(val-1,(trace[val][mod].giatri));
        cout<<'-';
    }
    if(trace[val][mod].dau=='+')
    {
        tvet(val-1,(trace[val][mod].giatri));
        cout<<'+';
    }
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n>>k;
    For(i,1,n)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            ll x=-a[i]/k;
            a[i]=a[i]+(x+1)*k;
        }
        a[i]%=k;
    }
    dp[1][a[1]%k]=true;
    For(i,1,n-1)
    {
        For(j,0,k-1)
        {
            if(dp[i][j]==true)
            {
                dp[i+1][(j+a[i+1])%k]=true;
                dp[i+1][(j-a[i+1]+k)%k]=true;
                trace[i+1][(j+a[i+1])%k].giatri=j;
                trace[i+1][(j+a[i+1])%k].dau='+';
                trace[i+1][(j-a[i+1]+k)%k].giatri=j;
                trace[i+1][(j-a[i+1]+k)%k].dau='-';
            }

        }
    }
   // cout<<abs(a[1])%k;
    if(dp[n][0]==true)
    {
        cout<<1<<endl;
        tvet(n,0);
        return 0;
    }
    cout<<0;
}
