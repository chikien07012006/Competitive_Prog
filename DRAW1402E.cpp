#include<iostream>
using namespace std;
long long x[1001],y[1001],z[1001];
int main()
{
    long long n,i,j,m=0;
    ios_base::sync_with_stdio(0);
    cin>>n;
    for (i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
        z[i]=1;
    }
    for (i=1;i<=n;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            if (x[i]<x[j]&&y[i]<y[j]) z[j]=max(z[j],z[i]+1);
        }
        m=max(m,z[i]);
    }
    cout<<m;
}
