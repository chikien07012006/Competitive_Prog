#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a+1, a+n+1, greater<int>());
    for(int i=1;i<=k;i++)
    {
        printf("%d ",a[i]);
    }
}
