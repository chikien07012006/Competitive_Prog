#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,t=0,t1=0;
    cin>>n; long long a[n*n];if(n==1){cout<<"YES";return 0;}
    for(long long i=1;i<=n*n;i++) {cin>>a[i];if(i<=n)t=t+a[i];}
    for(long long i=1;i<=n;i++)
    {
        for(long long j=i;j<=n*n-(n-i);j=j+n)
        {
            t1=t1+a[j];
        }
        if(t1!=t)
        {
            cout<<"NO";return 0;
        }
        t1=0;
    }
    t1=0;
    for(long long i=1;i<=n*n;i++)
    {
        t1=t1+a[i];
        if(i%n==0)
        {
            if(t1!=t){cout<<"NO";return 0;}
            else t1=0;
        }
    }
    t1=0;
    for(long long i=1;i<=n*n;i=i+(n+1))
    {
        t1=t1+a[i];
    }
    if(t1!=t){cout<<"NO";return 0;}
    t1=0;
    for(long long i=n*n-(n-1);i>=n;i=i-(n-1))
    {
        t1=t1+a[i];
    }
    if(t1!=t){cout<<"NO";return 0;}
    cout<<"YES";
}
