#include<bits/stdc++.h>
using namespace std;
long long f[1005][1005];
long long res=0;
signed main()
{
    ios_base::sync_with_stdio(0);
    long long m,n; cin>>m>>n;
    long long a[m+5][n+5];
    for(long long i=1;i<=m;i++)
    {
        for(long long j=1;j<=n;j++)
        {
            cin>>a[i][j];
            f[i][j]=f[i][j-1]+f[i-1][j]-f[i-1][j-1]+a[i][j];
        }
    }
    for(long long i=1;i<=m;i++)
    {
        for(long long j=1;j<=n;j++)
        {
            for(long long i1=i+1;i1<=m;i1++)
            {
                for(long long j1=j+1;j1<=n;j1++)
                {
                    if(9*(i1-i+1)*(j1-j+1)==(f[i1][j1]-f[i1][j-1]-f[i-1][j1]+f[i-1][j-1]))
                    {
                        res=max(res,(i1-i+1)*(j1-j+1));
                    }
                }
            }
        }
    }
    cout<<res;
} 