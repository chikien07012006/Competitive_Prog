#include<bits/stdc++.h>
using namespace std;
int a[100001],b[100001],c[100001],d[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,m,q,r=0;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
    cin>>a[i]>>b[i];
    for(int j=a[i];j<=b[i];j++) d[j]++;
    }
    sort(d+1,d+1+n,greater<long long>());
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        cin>>c[i];
    }
    sort(c+1,c+1+n);
    for(int j=1;j<=q;j++)
    {
        for(k=1;k<=n;i++)
        {

        }
    }
    return 0;
}
