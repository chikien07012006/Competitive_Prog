#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll check[1000][1000];
char a[1000][1000];
ll d1[4]={0,0,1,-1};
ll d2[4]={1,-1,0,0};
ll n,m,chick=0,fox=0,demg=0,demc=0;
bool kt(ll i,ll j)
{
    if(i>=1&&i<=n&&j>=1&&j<=m) return 1;
    return 0;
}
void ok(ll u ,ll v)
{
    if(a[u][v]=='c')demg++;
    if(a[u][v]=='f')demc++;
    check[u][v]=1;
    For(i,0,3)
    {
        ll t=u+d1[i]; ll t1=v+d2[i];
        if(a[t][t1]!='#'&&check[t][t1]!=1&&kt(t,t1)==1)
        {
            ok(t,t1);
        }
    }
}
signed main()
{
    freopen("FARM.inp","r",stdin);
    freopen("FARM.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    For(i,1,n)
    {
        string z; cin>>z;
        For(j,0,m-1)
        {
            a[i][j+1]=z[j];
            if(a[i][j+1]=='c')chick++;
            if(a[i][j+1]=='f') fox++;
        }
    }
    For(i,1,n)
    {
        For(j,1,m)
        {
            if(a[i][j]!='#'&&check[i][j]==0)
            {
                demg=0,demc=0;
                ok(i,j);
                if(demg>demc)
                {
                    fox=fox-demc;
                }
                else
                {
                    chick=chick-demg;
                }
            }
        }
    }
    cout<<fox<<' '<<chick;

}
