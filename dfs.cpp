#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll d[100005],q[100005],n,m;
vector<ll>a[100005];
void BFS(ll x)
{
    ll r=1,l=1;q[1]=x;d[x]=1;
    while(l<=r)
    {
        ll u=q[l++];
        for(int v:a[u])
        {
            if(d[v]==0)
            {
                q[++r]=v;
                d[v]=1;
            }
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    ll re=0,t,t1; cin>>n>>m;
    For(i,1,m)
    {
        cin>>t>>t1;
        a[t].push_back(t1);
        a[t1].push_back(t);
    }
    For(i,1,n)
    {
        if(d[i]==0)
        {
            BFS(i);
            re++;
        }
    }
    cout<<re;
}
