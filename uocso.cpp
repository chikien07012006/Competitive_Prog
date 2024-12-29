#include<stdio.h>
int main()
{
    int n,i,dem=0,tong=0;
    scanf("%d",&n);
    for( i=1;i<=n;i++)
        if(n%i==0)
        {
            dem++;
            tong=tong+i;
        }
        printf("%d ",dem);
        printf("%d ",tong);
}
scanf("%d",&n);
    for (int j=1;j<=sqrt(n);j++)
         if(n%j==0) dem+=2;
