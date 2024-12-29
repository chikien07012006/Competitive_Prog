#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
char a[1005][1005];
ll check[1005][1005],check1[1005][1005],n,m;
void DFS(ll i,ll j)
{
    if(check[i][j]==0&&a[i][j]=='.')
    {
        check[i][j]=1;
        DFS(i,j+1);
        DFS(i,j-1);
        DFS(i+1,j);
        DFS(i-1,j);
    }
}
void DFS1(ll i,ll j)
{
    if(check[i][j]==0&&a[i][j]!='#')
    {
        if
        check[i][j]=1;
        DFS(i,j+1);
        DFS(i,j-1);
        DFS(i+1,j);
        DFS(i-1,j);
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    For(i,1,n)
    {
        For(j,1,m) cin>>a[i][j];
    }
    For(i,1,m) check[0][i]=1;
    For(i,1,n) check[i][0]=1;
    DFS(1,1);
    if(check[i][j]==0)
    {
        DFS1(1,1)
    }
}
