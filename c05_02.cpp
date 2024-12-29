#include<stdio.h>
int main()
{
    int a,tong=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i=i+2)
        tong=tong+i;
    printf("%d",tong);
}
