#include<iostream>
using namespace std;

long long n,a[1000001],b[1000001],i,j;

int main()
{
    cin>>n;
    for (i=1;i<=n;i++) cin>>a[i];
    b[1]=a[1],b[2]=b[1]+a[2];
    for (i=3;i<=n;i++)
        b[i]=max(max(b[i-1],b[i-2]+a[i]),b[i-3]+a[i]+a[i-1]);
    cout<<b[n];
    return 0;
}
