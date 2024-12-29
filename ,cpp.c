#include<stdio.h>

int main()
{
    long n;
    long long a[100000000], s=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    {
        s+=a;
        printf("%lld ", s);
    }
    return 0;
}
