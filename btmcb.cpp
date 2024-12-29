#include<stdio.h>
int main()
{
    long n,max=0,vt;
    scanf("%ld",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            {max=a[i];
            vt=i;}
    }
    printf("%d",vt);
}
