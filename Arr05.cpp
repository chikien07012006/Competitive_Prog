#include<stdio.h>
int a[100000000];
int main()
{
    int t,tg;
    scanf("%d",&t);
    for(int i=1;i<=t;i++) scanf("%d",&a[i]);
    for(int i=1;i<=t;i++)
    {
        for(int j=i;j<=t;j++)
        if(a[i]>a[j]) {
            tg=a[i];
            a[i]=a[j];
            a[j]=tg;
        }

    }
    for(int i=1;i<=t;i++)
    printf(" %d",a[i]);
}
