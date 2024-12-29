#include<stdio.h>
int a[100000000];
int main()
{
    int n, max=0, k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        if((max<a[i])&&(a[i]<k))
        max=a[i];
    }
printf("%d",max);
for(int i=1;i<=n;i++)
    {if(a[i]==max)
    printf("\n%d",i);}
}
