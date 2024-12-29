#include<iostream>
#include<math.h>
using namespace std;
long long gcd(long long n, long long m)
{
    long long t;
    while(n>0)
    {
        t=n;
        n=m%n;
        m=t;
    }
    return m;
}
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t;
    cin>>n; long long a[n];
    for(long long i=1;i<=n;i++) {cin>>a[i];}t=a[1];
    for(long long i=2;i<=n;i++)
    {
        t=gcd(t,a[i]);
    }
    if(t==1) {cout<<"LN";return 0;}
    for(long long i=2;i<=sqrt(t);i++)
    {
        if(t%i==0) {cout<<i;return 0;}
    }
    cout<<t;
}
