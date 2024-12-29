#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
char a[1005][1005];
ll check [1005][1005];
ll n,m;
ll ktr(ll u,ll v)
{
    if(u>=1&&u<=n&&v>=1&&v<=m) return 1;
    return 0;
}
void DFS(ll i,ll j)
{
        if(check[i+1][j]==1||ktr(i+1,j)==0||a[i+1][j]=='#') ;
    else
    {
        check[i+1][j]=1;
        DFS(i+1,j);
    }
        if(check[i-1][j]==1||ktr(i-1,j)==0||a[i-1][j]=='#') ;
    else
    {
        check[i-1][j]=1;
        DFS(i-1,j);
    }
        if(check[i][j+1]==1||ktr(i,j+1)==0||a[i][j+1]=='#') ;
    else
    {
        check[i][j+1]=1;
        DFS(i,j+1);
    }
        if(check[i][j-1]==1||ktr(i,j-1)==0||a[i][j-1]=='#') ;
    else
    {
        check[i][j-1]=1;
        DFS(i,j-1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll fl=0,re=0; cin>>n>>m;
    For(i,1,n)
    {
        string t; cin>>t;
        For(j,0,m-1)
        {
            a[i][j+1]=char(t[j]);
        }
    }
    For(i,1,n)
    {
        For(j,1,m)
        {
            if(check[i][j]==1||a[i][j]=='#') continue;
            re++;
            DFS(i,j);
        }
    }
    cout<<re;
}










