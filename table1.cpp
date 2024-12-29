#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
struct vitri{ll x,y,giatri;};
ll tong[405][405];
ll gannhat[405][405];
signed main()
{
    ios_base::sync_with_stdio(0);
    ll m,n,res=-1e18; cin>>m>>n; ll a[m+5][n+5];
    For(i,1,m)
    {
        For(j,1,n)
        {
            char h; cin>>h; if(h=='X')a[i][j]=1; else a[i][j]=0;
        }
    }
    For(i,1,m)
    {
        For(j,1,n)
        {
            tong[i][j]=tong[i][j-1]+tong[i-1][j]-tong[i-1][j-1]+a[i][j];
        }
    }
    For(j,1,n)
    {
        ll dem=0;
        For(i,1,m)
        {
            if(a[i][j]==0)
            {
                dem++;
                gannhat[i][j]=dem;
            }
            else
            {
                dem=0;
            }
        }
    }
    For(i,1,m)
    {
        For(j,1,n)
        {
            for(ll k=j;k>=1;k--)
            {
                if(a[i][k]==1) break;
                ll canhdai=min(gannhat[i][j],gannhat[i][k]);
                ll u=i+1-canhdai;
                if(tong[i][j]+tong[u-1][k-1]-tong[i][k-1]-tong[u-1][j]==0)
                {
                    res=max(res,((j-k+1)+(i-u+1))*2);
                }
            }
        }
    }
    cout<<res;
}