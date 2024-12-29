#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll check[1000][1000];
ll a[1000][1000];
ll d1[4]={0,0,1,-1};
ll d2[4]={1,-1,0,0};
ll n,m,re=0,re1=0,dem=0,f=1000,z=1000,re3=0,re4=0;
bool kt(ll i,ll j)
{
    if(i>=1&&i<=n&&j>=1&&j<=m) return 1;
    return 0;
}
void BFS(ll i,ll j)
{
    For(k,0,3)
    {
        ll u=i+d1[k];
        ll v=j+d2[k];
        if(kt(u,v)==0||check[u][v]==1||a[u][v]==1) ;
        else
        {
            if(i<f)
            {
                f=i; z=j;
            }
            if(i==f)
            {
                z=min(z,j);
            }
            dem++;
            check[u][v]=1;
            BFS(u,v);
        }
    }
}
signed main()
{
    freopen("MLT.inp","r",stdin);
    freopen("MLT.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    For(i,1,n)
    {
        For(j,1,m) cin>>a[i][j];
    }
    For(i,1,n)
    {
        For(j,1,m)
        {
             dem=1; f=1000; z=1000;
             if(a[i][j]==0&&check[i][j]==0)
             {
                 check[i][j]=1;
                 re++;
                 BFS(i,j);
                 if(dem>re1)
                 {
                     re1=dem;
                     re3=f; re4=z;
                 }
             }
        }
    }
    cout<<re<<endl<<re1<<endl<<re3<<' '<<re4;
}
