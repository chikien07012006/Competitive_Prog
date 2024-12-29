#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n; long long a[n],b[n-1],c[n];
    for(long long i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<n;i++)
    {
        cin>>b[i];
    }
    c[1]=a[1]; c[0]=0;
    for(long long i=2;i<=n;i++)
    {
        c[i]=min(c[i-1]+a[i],c[i-2]+b[i-1]);
    }
    cout<<c[n];
}
