#include<stdio.h>
int main()
{
    int a,b,max=0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        {
            if(max<i)
            {
                max=i;
            }
        }
    }
    printf("%d/%d",a/max,b/max);
}
