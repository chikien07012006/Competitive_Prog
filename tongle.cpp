#include<stdio.h>
int main()
{
    long long n,scc,t=0;
    scanf("%lld",&n);
    while(n!=0)
    {
        scc=n%10;
        n=n/10;
        if(scc%2==0)
        {
            ;
        }
        else
        {
           t=t+scc;
        }
    }
    printf("%lld",t);
}
