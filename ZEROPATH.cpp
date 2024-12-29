#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[1000005];
vector<ll>f;
ll d[100005];
void sang()
{
    For(i,1,100005)
    {
        for(ll j=i*i;j<=100005;j=j+i)
        {
            a[j].push_back((i-1)*(j/i+1));
        }
    }
}
void DFS(ll n)
{
    if(d[n]==0)
    {
        d[n]=1;
        f.push_back(n);
        for(auto v:a[n])
        {
            if(d[v]==0)
            {
                DFS(v);
            }
        }
    }
}
int main()
{
    freopen("ZEROPATH.inp","r",stdin);
    freopen("ZEROPATH.out","w",stdout);
    ios_base::sync_with_stdio(0);
    ll n; cin>>n;
    sang();
    DFS(n);
    sort(f.begin(),f.end());
    cout<<f.size()-1<<endl;
    For(i,0,f.size()-2) cout<<f[i]<<' ';
}
