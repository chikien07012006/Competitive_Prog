#include<stdio.h>
int main ()
{
    int n;
    int i=1;
    scanf("%d",&n);
    while(i<=n)
    {
       int j=1;
       while (j<=n){
            printf("%d ",j);
            j++;
       }
        i++;
        printf("\n");
    }

}
