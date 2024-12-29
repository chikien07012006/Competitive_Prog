#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
void DFS(ll s,ll fl,ll check[105],vector<ll>a[105])
{
    check[s]=1;
    for(auto v:a[s])
    {
        if(check[v]==1)
        {
            fl=1; return ;
        }
        DFS(v,fl,check,a);
    }
}
int main()
{
  //  freopen("KTTREE.inp","r",stdin);
 //   freopen("KTTREE.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll T; cin>>T;
    while(T--)
    {
        vector<ll>a[105]; ll check[105]; memset(check,0,sizeof check);
        ll n,m,fl=0; cin>>n>>m;
        For(i,1,m)
        {
            ll u,v; cin>>u>>v;
            a[u].push_back(v);
            a[v].push_back(u);
        }
        DFS(1,fl,check,a);
        if(fl==1){cout<<0<<endl; continue;}
        For(i,1,n)
        {
            if(check[i]==0)
            {
                fl=1; return 0;
            }
        }
        if(fl==1){cout<<0<<endl; return 0;}
        cout<<1<<endl;
    }
}


