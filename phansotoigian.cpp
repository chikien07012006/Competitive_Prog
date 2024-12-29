#include<stdio.h>
int main()
{
    long long n,m,max=0;
    scanf("%lld %lld",&n,&m);
    for(int i=0;i<m;i++)
    {
        if(m%i==0||n%i==0)
        {
            if(max<i)
            {
                max=i;
            }
        }
    }
    printf("%lld",max);
}
