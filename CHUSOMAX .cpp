#include<stdio.h>
int main()
{
    long long n,scc,max=0;
    scanf("%lld",&n);
    while(n!=0)
    {
        scc=n%10;
        n=n/10;
        if(scc>max)
        {
            max=scc;
        }
    }
    printf("%lld",max);
}
