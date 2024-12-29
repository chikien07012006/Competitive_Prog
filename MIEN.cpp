#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll check[1000][1000];
ll a[1000][1000];
ll d1[4]={0,0,1,-1};
ll d2[4]={1,-1,0,0};
ll n,m,re=0,dem=0,re1=0,z,f,re2=0,re3=0;
bool kt(ll i,ll j)
{
    if(i>=1&&i<=n&&j>=1&&j<=m) return 1;
    return 0;
}
void DFS(ll i,ll j,ll aij)
{
    For(k,0,3)
    {
        ll u=i+d1[k];
        ll v=j+d2[k];
        if(kt(u,v)==0||a[u][v]!=aij||check[u][v]>0) ;
        else
        {
            dem++;
            check[u][v]=1;
            DFS(u,v,aij);
        }
    }
}
signed main()
{
    freopen("MIEN.inp","r",stdin);
    freopen("MIEN.out","w",stdout);
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
            dem=1;
            if(check[i][j]==0)
            {
                check[i][j]=1;
                re++;
                DFS(i,j,a[i][j]);
                if(re1<dem)
                {
                    re1=dem;
                    re2=i; re3=j;
                }
        }
    }
    }
    cout<<re<<endl<<re1<<endl<<'a'<<'['<<re2<<','<<re3<<']';
}

