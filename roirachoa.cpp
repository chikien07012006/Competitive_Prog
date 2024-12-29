#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long n,d=0;
    cin>>n; long long a[n],c[n],b[n];
    for(long long i=1;i<=n;i++) {cin>>a[i]; c[i]=a[i];}
    sort(c+1,c+1+n);
    for(long long i=1;i<=n;i++)
    {
        if(c[i]!=c[i-1]){d++;b[d]=c[i];}
    }
    for(long long i=1;i<=n;i++)
    {
        for(long long j=1;j<=d;j++)
        {
            if(a[i]==b[j])
            {
                cout<<j<<' '; break;
            }
        }
    }
}
