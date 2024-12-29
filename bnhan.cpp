#include<bits/stdc++.h>
using namespace std;
long long a[1000001];
int main()
{
    long long n,m,k,d=1;
    scanf("%lld%lld%lld",&n,&m,&k);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
          a[d]=i*j;
          d++;
        }
    }
    sort(a+1,a+1+n*m);
    printf("%lld",a[k]);
}
