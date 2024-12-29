#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[100005];
ll f[100005],b[100005],k=1;
void dfs(ll n)
{
    for(auto v:a[n])
    {
        if(f[v]==0)
        {
            b[k]=v; k++;
            f[v]=1;
            dfs(v);
        }
    }
}
int main()
{
    freopen("CONNECT.inp","r",stdin);
    freopen("CONNECT.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,m,re=0; cin>>n>>m;
    For(i,1,m)
    {
        ll l,r; cin>>l>>r;
        a[l].push_back(r);
        a[r].push_back(l);
    }
    For(i,1,n) sort(a[i].begin(),a[i].end());
    For(i,1,n)
    {
        if(f[i]==0)
        {
            b[k]=i; k++;
            f[i]=1;
            re++;
            dfs(i);
            sort(b+1,b+k);
            For(j,1,k-1) cout<<b[j]<<' '; cout<<endl;
            For(j,1,k-1)b[k]=0;
            k=1;
        }
    }
}

