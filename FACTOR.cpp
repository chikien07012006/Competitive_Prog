#include<stdio.h>
int main()
{
     int n,i=2,dem=0;
     scanf("%d",&n);
     for(int j=1;j<=n;j++)
        if(n%j==0) dem++;
     while(n>1)
        if(n%i==0)
    {
        n=n/i;
        if(n==1) printf("%d",i);
            else printf("%d*",i);
    }
    else i++;
printf("\n%d",dem);
}

