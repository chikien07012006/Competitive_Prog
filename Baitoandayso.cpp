#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,a,b) for(ll i=a;i<=b;i++)
ll tong[20005],re=0,n,dem=0;
ll a[20005],fl[20005][20005];
void haha(ll u,ll v)
{
    For(i,u,v)
    {
        if(tong[i]-tong[u-1]==tong[v]-tong[i])
        {
            fl[u][v]=1;
            dem++;
            re=max(re,dem);
            cout<<u<<' '<<v<<' '<<i<<endl;
            haha(u,i);
            if(fl[u][i]==1)
            {
                dem--;
                fl[u][i]=0;
            }
            haha(i+1,v);
            if(fl[i+1][v]==1)
            {
                dem--;
                fl[i+1][v]=0;
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    For(i,1,n) cin>>a[i],tong[i]=tong[i-1]+a[i];
    haha(1,n);
    cout<<re;
}
