#include<stdio.h>
int main()
{
    long a,b,d=0,max=0;
    scanf("%ld %ld",&a,&b);
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
    printf("%d",max);
}
