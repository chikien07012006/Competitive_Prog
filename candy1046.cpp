#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll f[5000][50];
int main()
{
    freopen("CANDY1046.inp","r",stdin);
    freopen("CANDY1046.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,s=0,re=1e18; cin>>n; ll a[n+5];
    For(i,1,n) cin>>a[i],s+=a[i];
    For(i,0,n) f[0][i]=1;
    For(i,1,n)
    {
        For(j,1,s)
        {
            if(f[j][i-1]==1)f[j][i]=1;
            if(j-a[i]>=0)
            {
                if(f[j-a[i]][i-1]==1)f[j][i]=1;
            }
        }
    }
    For(i,1,s)
    {
        ll t=s-i;
        if(f[i][n]==1&&f[t][n]==1)
        {
            re=min(re,abs(i-t));
        }
    }
    cout<<re;
}



