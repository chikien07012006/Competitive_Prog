#include<bits/stdc++.h>
using namespace std;
vector<long long>a[10005];
long long u[10005],v[10005];
long long check[10005];
long long n,m,res=0;
bool lienthong(long long x,long long y,long long k)
{
    check[k]=1;
    for(auto h:a[k])
    {
        if((h!=x&&k!=y)||(h!=y&&k!=x))
        if(check[h]==0)
        {
            lienthong(x,y,h);
        }
    }
    long long flag=0;
    for(long long i=1;i<=n;i++){
        if(check[i]==0){flag=1;break;}
    }
    if(flag==0)res++;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin>>n>>m;
    for(long long i=1;i<=m;i++)
    {
        long long x,y; cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
        u[i]=x;v[i]=y;
    }
    for(long long i=1;i<=m;i++)
    {
        memset(check,0,sizeof(check));
        lienthong(u[i],v[i],1);
    }
    cout<<res;
} 