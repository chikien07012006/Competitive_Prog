#include<stdio.h>
int a[100000000];
int main()
{
    int n, min=1000000000;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++)
        if(min>a[i])
    {
        if(min>a[i])
        min=a[i];
    }
printf("%d",min);
for(int i=1;i<=n;i++)
    {if(a[i]==min)
    printf("\n%d",i);}
}
