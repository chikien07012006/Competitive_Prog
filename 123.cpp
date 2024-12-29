#include<stdio.h>

int main()
{
    long n;
    long long a[100000000], b[100000000] ;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) scanf("%d",&b[i]);
    for(int i=1;i<=n;i++) b[i]=b[i-1]+a[i];
        printf("%lld ",b[i]);
}
