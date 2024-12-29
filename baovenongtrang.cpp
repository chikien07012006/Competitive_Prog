#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
bool check[705][705];
ll a[705][705];
ll n,m,re=0;
bool kt(ll i, ll j)
{
    if(i<=n&&i>=1&&j<=m&&j>=1) return 1;
    return 0;
}
void DFS(ll i, ll j)
{
    if(check[i-1][j]==1||kt(i-1,j)==0||a[i-1][j]==0);
    else{
        check[i-1][j]=1;
        DFS(i-1,j);
    }
    if(check[i][j-1]==1||kt(i,j-1)==0||a[i][j-1]==0);
    else{
        check[i][j-1]=1;
        DFS(i,j-1);
    }
    if(check[i+1][j]==1||kt(i+1,j)==0||a[i+1][j]==0);
    else{
        check[i+1][j]=1;
        DFS(i+1,j);
    }
    if(check[i][j+1]==1||kt(i,j+1)==0||a[i][j+1]==0);
    else{
        check[i][j+1]=1;
        DFS(i,j+1);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    For(i,1,n)
        For(j,1,m)
            cin>>a[i][j];
    For(i,1,n)
     For(j,1,m)
     {
         if(check[i][j]==1||a[i][j]==0)continue;
         re++;
         DFS(i,j);
     }
     cout<<re;
}
