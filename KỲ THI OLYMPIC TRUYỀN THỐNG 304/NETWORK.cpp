#include<bits/stdc++.h>
using namespace std;
vector<long long>a[100005];
long long check[100005],duongdi[100005];
long long n,m,res=0;

void DFS(long long u,long long vuadi)
{
    check[u]=1;
    for(auto v:a[u])
    {
        if(v!=vuadi)
        {
            if(check[v]==0)
            {
                duongdi[v]=duongdi[u]+1;
                DFS(v,u);
            }
            if(check[v]==1)
            {
                res=res+duongdi[u]-duongdi[v]+1;
            }
        }
    }
    check[u]=0;
    duongdi[u]-=1;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        long long x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    DFS(1,0);
    cout<<res/2;
} 