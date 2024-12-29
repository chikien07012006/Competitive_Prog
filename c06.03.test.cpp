#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {//anh  dd
        int j=i;
        while(j<=n+i-1)
        {
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
    }
}
