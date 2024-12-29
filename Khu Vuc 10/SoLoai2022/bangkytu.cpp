#include<bits/stdc++.h>
using namespace std;
long long da[2005][2005];
long long db[2005][2005];
char a[2005][2005];
long long n,m,k;
signed main()
{
    ios_base::sync_with_stdio(0);
    long long T; cin>>T;
    while(T--)
    {
        memset(da,0,sizeof(da));
        memset(db,0,sizeof(db));
        cin>>n>>m>>k;long long re=0;
        for(long long i=1; i<=n; i++)
        {
            string v; cin>>v;
            for(long long j=1;j<=m;j++)
            {
                a[i][j]=v[j-1];
                if(a[i][j]=='A')
                {
                    da[i][j]=da[i-1][j]+da[i][j-1]-da[i-1][j-1]+1;
                    db[i][j]=db[i-1][j]+db[i][j-1]-db[i-1][j-1];
                }
                if(a[i][j]=='B')
                {
                    db[i][j]=db[i-1][j]+db[i][j-1]-db[i-1][j-1]+1;
                    da[i][j]=da[i-1][j]+da[i][j-1]-da[i-1][j-1];
                }
            }
        }
        for(long long i=1; i<=n; i++)
        {
            for(long long j=1;j<=m;j++)
            {
                for(long long i1=i;i1<=n;i1++)
                {
                    for(long long j1=j;j1<=m;j1++)
                    {
                        long long dema=da[i1][j1]-da[i1][j-1]-da[i-1][j1]+da[i-1][j-1];
                        long long demb=db[i1][j1]-db[i1][j-1]-db[i-1][j1]+db[i-1][j-1];
                        if(abs(dema-demb)<=k)
                        {
                            re=max(re,(i1-i+1)*(j1-j+1));
                        }
                    }
                }
            }
        }
        cout<<re<<endl;
    }
}
