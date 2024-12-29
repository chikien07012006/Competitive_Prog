#include<stdio.h>
long long n,m,p,max;
int main()
{
    scanf("%lld",&n);
    scanf("%lld",&m);
    if((n&p==0)&&(m%p==0))
        printf("%lld",p);
    return 0;
}
