#include<bits/stdc++.h>
using namespace std;
long long d[1000001],t[1000001],a[1000001];
int main()
{
    ios_base::sync_with_stdio(0);
    long long m;
    cin>>m;
    for(long long i=1;i<=m;i++)
    {
        long long n;
        cin>>n;
        for(long long j=1;j<=n;j++)
        {
            cin>>a[j];t[a[j]]=1;
        }
        for(long long j=0;j<=1000001;j++)
        {
            if(t[a[j]]==1){d[a[j]]++;t[a[j]]=0;}
        }
    }
    for(long long i=0;i<=1000001;i++)
    {
        if(d[i]>=m){cout<<i<<' ';}
    }
    cout<<endl;
    for(long long i=0;i<=1000001;i++)
    {
        if(d[i]>=1){cout<<i<<' ';}
    }
}
