#include<stdio.h>
int a[100000000];
int main()
{
    int t,tg,k;
    scanf("%d %d",&t,&k);
    for(int i=1;i<=t;i++) scanf("%d",&a[i]);
    for(int i=1;i<=t-1;i++)
    {
        for(int j=i+1;j<=t;j++)
        if(a[i]>a[j])
        {
            tg=a[i];
            a[i]=a[j];
            a[j]=tg;
        }
    }
    printf(" %d",a[k]);
}
