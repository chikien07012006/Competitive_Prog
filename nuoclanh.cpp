#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[99999+5];
ll check[99999+1],dd[99999+1];
deque<ll>f;
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,c; cin>>n>>c;
    For(i,1,c)
    {
        ll u,u1,u2; cin>>u>>u1>>u2;
        a[u].push_back(u1);
        a[u].push_back(u2);
    }
    dd[1]=1; f.push_back(1); check[1]=1;
    while(!f.empty())
    {
        ll u=f.front(); f.pop_front();
        for(auto v:a[u])
        {
            f.push_back(v);
            dd[v]=dd[u]+1;
            check[v]=1;
        }
    }
    For(i,1,n)
    {
        cout<<dd[i]<<endl;
    }
}












