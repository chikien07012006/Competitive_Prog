#include<stdio.h>
long long n,max=0,d=0;
int main()
{
    scanf("%lld",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]==max)
            d++;
    }

    printf("%d",d);
}
