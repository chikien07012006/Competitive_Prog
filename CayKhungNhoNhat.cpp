#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
struct ok{ll u,v,w;};
vector<ok>a;
vector<ll>b[10005];
int parent[10005];
bool cmp(ok truoc, ok sau)
{
    return truoc.w<sau.w;
}
void init(int n)
{
	for(int i = 1 ; i <= n; i++)
		parent[i] = i;
}
ll Find(ll u)
{
	if(parent[u] == u) return u;
	return parent[u] = Find(parent[u]);
}

bool Uni(ll u, ll v)
{
	u = Find(u); v = Find(v);
	if(u == v) return false;
	parent[u] = v;
	return true;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,dem=0,tong=0; cin>>n>>m;
    For(i,1,m)
    {
        ll x,y,z; cin>>x>>y>>z;
        ok tam;
        tam.u=x;
        tam.v=y;
        tam.w=z;
        a.push_back(tam);
    }
    init(n);
    sort(a.begin(),a.end(),cmp);
    For(i,0,a.size()-1)
    {
        if(dem==n-1) break;
        if(Uni(a[i].u,a[i].v))
        {
            dem++;
            tong+=a[i].w;
        }
    }
    cout<<tong;
}
