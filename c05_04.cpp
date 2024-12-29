#include<stdio.h>
int main()
{

    int a,dem=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
        if(a%i==0) dem++;
        printf("%d",dem);

}
