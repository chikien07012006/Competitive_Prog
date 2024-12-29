#include<stdio.h>
int a[100000005];
int main()
{
    long long n,i,s=0,d=0;
    scanf("%d",&n);
    for( i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
        if(a[i]<0)
            {d++;
        s=s+a[i];
        printf("%d.2f",s/d);
       if(a[i]>0) printf("%d",-1);
    }
}
printf("%d.2f",s/d);
