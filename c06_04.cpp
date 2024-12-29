#include<stdio.h>
int main()
{
    int n, dem;
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        int j=i, dem=0;
        while((j<=n+i-1)&&(dem<i))
        {
         printf("%d ",j);
          j++;
        dem++;
        }
        i++;
        printf("\n");
    }
}
