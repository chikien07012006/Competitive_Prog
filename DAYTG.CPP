#include<stdio.h>
int a[10000000],d[10000000],h[10000000];
int main()
{
    long long j,i,n,max=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
        if(a[i]>a[i-1])
            d[i]=d[i-1]+1;
        else
            d[i]=1;
    for(i=n;i>=1;i--)
        if(a[i]>a[i+1])
            h[i]=h[i+1]+1;
        else
            h[i]=1;
    for(i=1;i<=n;i++)
    {
        if(d[i]>1&&h[i]>1&&max<d[i]+h[i]-1)
            max=d[i]+h[i]-1;
    }
    printf("%d",max);
}

