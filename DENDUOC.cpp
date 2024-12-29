#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[100005];
ll re=1;
ll f[100005];
void BFS(ll s)
{
    For(i,0,a[s].size()-1)
    {
        if(f[a[s][i]]==0)
        {
            re++;
            f[a[s][i]]=1;
            BFS(a[s][i]);
        }
    }
}
int main()
{
    freopen("DENDUOC.inp","r",stdin);
    freopen("DENDUOC.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n,m,s; cin>>n>>m>>s;
    For(i,1,m)
    {
        ll l,r; cin>>l>>r;
        a[l].push_back(r);
        a[r].push_back(l);
    }
    f[s]=1;
    BFS(s);
    cout<<re;
}



