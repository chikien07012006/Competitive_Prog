#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
vector<ll>a[1005][1005];
vector<ll>b[1005];
ll tluong[25],check[1005];
ll n,m,k,re=0;
void DFS(ll i)
{
    check[i]=1;
    for(auto v:b[i])
    {
        for(auto l:a[i][v])
        {
            if(tluong[1]<=l)
            {
                if(check[v]==0) DFS(v);
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m>>k;
    For(i,1,k)
    {
        cin>>tluong[i];
    }
    sort(tluong+1,tluong+1+k);
    For(i,1,m)
    {
        ll ai,bi,ti,fl=0; cin>>ai>>bi>>ti;
        for(auto v:b[ai])
        {
            if(v==bi){
                fl=1; break;
            }
        }
        if(fl==0)
        {
            b[ai].push_back(bi);
            b[bi].push_back(ai);
        }
        a[ai][bi].push_back(ti);
        a[bi][ai].push_back(ti);
    }
    For(i,1,n)
    {
        if(check[i]==0)
        {
            re++;
            DFS(i);
        }
    }
    cout<<re;
}
