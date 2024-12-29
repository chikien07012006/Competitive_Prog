#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
deque<ll>d;
ll check[1003][1003];
ll ktr(ll u,ll v,ll n, ll m)
{
    if(u>=1&&u<=n&&v>=1&&v<=m) return 1;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    ll n,m,fl=0; cin>>n>>m; char a[n+5][m+5];
    For(i,1,n)
    {
        string t; cin>>t;
        For(j,0,m-1)
        {
            a[i][j+1]=char(t[j]);
            if(a[i][j+1]=='A')
            {
                check[i][j+1]=1;
                d.push_back(i);
                d.push_back(j+1);
            }
        }
    }
    while(!d.empty())
    {
        ll u=d.front(); d.pop_front();
        ll v=d.front(); d.pop_front();
       // cout<<u<<' '<<v<<endl;
        if(a[u][v]=='B')
        {
            cout<<"YES"; return 0;
        }
        if(check[u+1][v]==1||ktr(u+1,v,n,m)==0||a[u+1][v]=='#');
        else
        {
            check[u+1][v]=1;
            d.push_back(u+1); d.push_back(v);
        }
        if(check[u-1][v]==1||ktr(u-1,v,n,m)==0||a[u-1][v]=='#');
        else
        {
            check[u-1][v]=1;
            d.push_back(u-1); d.push_back(v);
        }
        if(check[u][v+1]==1||ktr(u,v+1,n,m)==0||a[u][v+1]=='#');
        else
        {
            check[u][v+1]=1;
            d.push_back(u); d.push_back(v+1);
        }
        if(check[u][v-1]==1||ktr(u,v-1,n,m)==0||a[u][v-1]=='#');
        else
        {
            check[u][v-1]=1;
            d.push_back(u); d.push_back(v-1);
        }
    }
    cout<<"NO"; return 0;
}









