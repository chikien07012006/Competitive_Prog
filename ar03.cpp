#include<stdio.h>
int main()
{
    long long n,d=0,s=0,i;
    long long a[10000];
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for( i=1;i<=n;i++)
    {
        if(a[i]>0)
        {
            d++;
            s=s+a[i];
        }
    }
    printf("%lld %lld",d,s);
}
