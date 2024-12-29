#include<bits/stdc++.h>
using namespace std;
long long a[505][505],b[505][505],n;
long long e[505][505],e1[505][505];
void nhan()
{
    for(long long i=1; i<=n; i++)
    {
        for(long long j=1; j<=n; j++)
        {
            long long res=0;
            for(long long k=1;k<=n;k++)
            {
                res = a[i][k]*a[k][j] + res;
            }
            e[i][j]=res;
        }
    }
}
void nhan1()
{
    for(long long i=1; i<=n; i++)
    {
        for(long long j=1; j<=n; j++)
        {
            long long res=0;
            for(long long k=1;k<=n;k++)
            {
                res = e[i][k]*a[k][j] + res;
            }
            e1[i][j]=res;
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    long long T; cin>>T; 
    while(T--){
    cin>>n;
    for(long long i=1; i<=n; i++)
    {
        for(long long j=1; j<=n; j++)
        {
            cin>>a[i][j];
        }
    }
    for(long long i=1; i<=n; i++)
    {
        for(long long j=1; j<=n; j++)
        {
            cin>>b[i][j];
        }
    }
    nhan(); nhan1();
    long long flag=0;
    for(long long i=1; i<=n; i++)
    {
        for(long long j=1; j<=n; j++) {
            if(b[i][j]==e1[i][j]);
            else
            {
                flag=1;break;
            }
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    }
}