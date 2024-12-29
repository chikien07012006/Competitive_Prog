#include<bits/stdc++.h>
using namespace std;
long long a[100001],b[100001];
int main()
{
    ios_base::sync_with_stdio(0);
    long long t,k=1,n;
    cin>>t;
    a[0]=0; a[1]=1;
    for(long long i=1;i<=1e5;i++)
    {
        a[2*i]=a[i];
        a[2*i+1]=a[i]+a[i+1];
    }
    b[0]=0;
    for(long long i=1;i<=1e5;i++)
    {
        b[i]=max(b[i-1],a[i]);

    }
    for(long long j=1;j<=t;j++)
    {
    cin>>n;
    cout<<b[n]<<endl;
    }
}
