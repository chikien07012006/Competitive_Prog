#include<stdio.h>
int a[100000000];
int main()
{
    int n, max=0, vt;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
    {
    if(max<a[i])
        max=a[i];
        vt=i;
    }
printf("%d",max);
printf("%d",vt);
}

