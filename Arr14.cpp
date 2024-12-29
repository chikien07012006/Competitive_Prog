    #include<stdio.h>
int main()
{
    long long a[100000],n,b[100000],i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    scanf("%lld",&a[i]);
    b[1]=a[1]; printf("%lld ",b[1]);
    for (i=2;i<=n;i++)
    {
        b[i]=b[i-1]+a[i];
             printf("%lld ",b[i]);

    }

    return 0;
}
