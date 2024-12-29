#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
char a[105][105];
ll check [105][105];
ll dem[105][105];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
deque<ll>d;
ll n,m;
bool ktr(ll u,ll v)
{
    if(u>=1&&u<=n&&v>=1&&v<=m) return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll fl=0,re=0,ci,cj; cin>>n>>m;
    For(i,1,n)
    {
        string t; cin>>t;
        For(j,0,m-1)
        {
            if(t[j]=='C')
            {
                ci=i; cj=j+1;
            }
            a[i][j+1]=char(t[j]);
        }
    }
    d.push_back(1);d.push_back(1); check[1][1]=1;
    while(!d.empty())
    {
        ll y=d.front(); d.pop_front();
        ll r=d.front(); d.pop_front();
        For(i,0,3)
        {
            ll u=y+dx[i]; ll v=r+dy[i];
            if(ktr(u,v)==0||a[u][v]=='*'||check[u][v]==1) continue;
            check[u][v]=1; d.push_back(u); d.push_back(v);
            dem[u][v]=dem[u-dx[i]][v-dy[i]]+1;
        }
    }
    cout<<dem[ci][cj];
}










