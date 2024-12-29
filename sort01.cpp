#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,d=1;
    cin>>n; long long a[n],b[n],c[n];
    for(long long i=1;i<=n;i++) cin>>a[i];
    c[n]=a[n]; b[1]=a[1];
    for(long long i=n-1;i>=1;i--) c[i]=min(c[i+1],a[i]);
    for(long long i=2;i<=n;i++) b[i]=max(b[i-1],a[i]);
    for(long long i=1;i<n;i++)
    {
        if(b[i]<=c[i+1]){ d++;
        cout<<i<<endl;}
    }
    cout<<d;
}
